//////////////////////////////////////////////////////////////
// Program to print 5 times "Marvellous" on screen.
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
	int i = 0;
	for(i = 1; i<=5;i++)
	{
		printf("Marvellous\n");
	}
}

int main()
{
	Display();
	
	return 0;
}
using System;
using System.ServiceModel.Configuration;

namespace MyServiceLibrary
{
    public class CustomEndpointBehaviorExtension : BehaviorExtensionElement
    {
        protected override object CreateBehavior()
        {
            return new CustomEndpointBehavior();
        }

        public override Type BehaviorType
        {
            get { return typeof(CustomEndpointBehavior); }
        }
    }
}

<configuration>
  <system.serviceModel>
    <behaviors>
      <endpointBehaviors>
        <behavior name="CustomEndpointBehavior">
          <customEndpointBehavior />
        </behavior>
      </endpointBehaviors>
    </behaviors>
    <extensions>
      <behaviorExtensions>
        <add name="customEndpointBehavior" type="MyServiceLibrary.CustomEndpointBehaviorExtension, MyServiceLibrary" />
      </behaviorExtensions>
    </extensions>
    <services>
      <service name="MyServiceLibrary.MyService">
        <endpoint address="rest" binding="webHttpBinding" contract="MyServiceLibrary.IMyService" behaviorConfiguration="CustomEndpointBehavior"/>
        <endpoint address="soap" binding="basicHttpBinding" contract="MyServiceLibrary.IMyService" behaviorConfiguration="CustomEndpointBehavior"/>
        <endpoint address="mex" binding="mexHttpBinding" contract="IMetadataExchange"/>
      </service>
    </services>
  </system.serviceModel>
</configuration>


using System;
using System.ServiceModel.Channels;
using System.ServiceModel.Description;
using System.ServiceModel.Dispatcher;

namespace MyServiceLibrary
{
    public class CustomEndpointBehavior : IEndpointBehavior
    {
        public void AddBindingParameters(ServiceEndpoint endpoint, BindingParameterCollection bindingParameters) { }

        public void ApplyClientBehavior(ServiceEndpoint endpoint, ClientRuntime clientRuntime) { }

        public void ApplyDispatchBehavior(ServiceEndpoint endpoint, EndpointDispatcher endpointDispatcher)
        {
            endpointDispatcher.DispatchRuntime.MessageInspectors.Add(new CustomMessageInspector());
        }

        public void Validate(ServiceEndpoint endpoint) { }
    }

    public class CustomMessageInspector : IDispatchMessageInspector
    {
        public object AfterReceiveRequest(ref Message request, IClientChannel channel, InstanceContext instanceContext)
        {
            string token = HeaderExtractor.GetHeaderValue("Authorization");
            if (!string.IsNullOrEmpty(token))
            {
                if (token.StartsWith("Bearer ", StringComparison.OrdinalIgnoreCase))
                {
                    token = token.Substring("Bearer ".Length).Trim();
                }

                if (TokenValidator.ValidateToken(token))
                {
                    return null;
                }
            }

            throw new UnauthorizedAccessException("Access denied due to invalid or missing token.");
        }

        public void BeforeSendReply(ref Message reply, object correlationState) { }
    }

    public static class HeaderExtractor
    {
        public static string GetHeaderValue(string headerName)
        {
            if (OperationContext.Current != null)
            {
                if (OperationContext.Current.IncomingMessageProperties.TryGetValue(HttpRequestMessageProperty.Name, out var httpRequestMessageObject))
                {
                    var httpRequestMessage = httpRequestMessageObject as HttpRequestMessageProperty;
                    if (httpRequestMessage != null)
                    {
                        return httpRequestMessage.Headers[headerName];
                    }
                }
                else
                {
                    var headers = OperationContext.Current.RequestContext.RequestMessage.Headers;
                    if (headers.FindHeader(headerName, string.Empty) != -1)
                    {
                        return headers.GetHeader<string>(headerName, string.Empty);
                    }
                }
            }
            return null;
        }
    }

    public static class TokenValidator
    {
        public static bool ValidateToken(string token)
        {
            // Add your token validation logic here
            // For example, check against a database or verify signature, expiration, etc.
            return !string.IsNullOrEmpty(token) && token == "valid_token"; // Example validation
        }
    }
}


using System;
using System.ServiceModel;
using System.ServiceModel.Channels;
using System.ServiceModel.Description;
using System.ServiceModel.Dispatcher;

namespace MyServiceLibrary
{
    public class CustomEndpointBehavior : IEndpointBehavior
    {
        public void AddBindingParameters(ServiceEndpoint endpoint, BindingParameterCollection bindingParameters) { }

        public void ApplyClientBehavior(ServiceEndpoint endpoint, ClientRuntime clientRuntime) { }

        public void ApplyDispatchBehavior(ServiceEndpoint endpoint, EndpointDispatcher endpointDispatcher)
        {
            endpointDispatcher.DispatchRuntime.MessageInspectors.Add(new CustomMessageInspector());
        }

        public void Validate(ServiceEndpoint endpoint) { }
    }

    public class CustomMessageInspector : IDispatchMessageInspector
    {
        public object AfterReceiveRequest(ref Message request, IClientChannel channel, InstanceContext instanceContext)
        {
            string token = HeaderExtractor.GetHeaderValue("Authorization");
            if (!string.IsNullOrEmpty(token))
            {
                if (token.StartsWith("Bearer ", StringComparison.OrdinalIgnoreCase))
                {
                    token = token.Substring("Bearer ".Length).Trim();
                }

                if (TokenValidator.ValidateToken(token))
                {
                    return null;
                }
            }

            throw new UnauthorizedAccessException("Access denied due to invalid or missing token.");
        }

        public void BeforeSendReply(ref Message reply, object correlationState) { }
    }

    public static class HeaderExtractor
    {
        public static string GetHeaderValue(string headerName)
        {
            var webContext = WebOperationContext.Current;
            if (webContext != null)
            {
                // For REST requests
                return webContext.IncomingRequest.Headers[headerName];
            }
            else
            {
                // For SOAP requests
                var operationContext = OperationContext.Current;
                if (operationContext != null)
                {
                    MessageHeaders headers = operationContext.RequestContext.RequestMessage.Headers;
                    if (headers.FindHeader(headerName, string.Empty) != -1)
                    {
                        return headers.GetHeader<string>(headerName, string.Empty);
                    }
                }
            }
            return null; // Return null if header is not found
        }
    }

    public static class TokenValidator
    {
        public static bool ValidateToken(string token)
        {
            // Add your token validation logic here
            // For example, check against a database or verify signature, expiration, etc.
            return !string.IsNullOrEmpty(token) && token == "valid_token"; // Example validation
        }
    }
}


<configuration>
  <system.serviceModel>
    <behaviors>
      <endpointBehaviors>
        <behavior name="CustomEndpointBehavior">
          <customEndpointBehavior />
        </behavior>
      </endpointBehaviors>
    </behaviors>
    <extensions>
      <behaviorExtensions>
        <add name="customEndpointBehavior" type="MyServiceLibrary.CustomEndpointBehaviorExtension, MyServiceLibrary" />
      </behaviorExtensions>
    </extensions>
    <services>
      <service name="MyServiceLibrary.MyService">
        <endpoint address="rest" binding="webHttpBinding" contract="MyServiceLibrary.IMyService" behaviorConfiguration="CustomEndpointBehavior"/>
        <endpoint address="soap" binding="basicHttpBinding" contract="MyServiceLibrary.IMyService" behaviorConfiguration="CustomEndpointBehavior"/>
        <endpoint address="mex" binding="mexHttpBinding" contract="IMetadataExchange"/>
      </service>
    </services>
  </system.serviceModel>
</configuration>


using System.ServiceModel.Configuration;

namespace MyServiceLibrary
{
    public class CustomEndpointBehaviorExtension : BehaviorExtensionElement
    {
        protected override object CreateBehavior()
        {
            return new CustomEndpointBehavior();
        }

        public override Type BehaviorType
        {
            get { return typeof(CustomEndpointBehavior); }
        }
    }
}
