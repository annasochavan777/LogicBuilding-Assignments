//////////////////////////////////////////////////////////////
// Program to divide two numbers
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
int Divide(int iNo1, int iNo2)
{
	int iAns = 0;
	if(iNo2 == 0)
	{
		return -1;
	}
	iAns = iNo1 / iNo2;
	return iAns;
}

int main()
{
	int iValue1 = 15, iValue2 = 5;
	int iRet = 0;
	iRet = Divide(iValue1, iValue2);
	printf("Division is %d", iRet);
	return 0;
}


using System;
using System.ServiceModel;
using System.ServiceModel.Channels;

namespace MyServiceLibrary
{
    public class CustomAuthorizationManager : ServiceAuthorizationManager
    {
        protected override bool CheckAccessCore(OperationContext operationContext)
        {
            // For REST, check the HTTP Authorization header
            string authHeader = GetRestHeader(operationContext, "Authorization");
            if (!string.IsNullOrEmpty(authHeader) && authHeader.StartsWith("Bearer ", StringComparison.OrdinalIgnoreCase))
            {
                string token = authHeader.Substring("Bearer ".Length).Trim();
                return TokenValidator.ValidateToken(token);
            }

            // For SOAP, check a custom SOAP header
            var headers = operationContext.RequestContext.RequestMessage.Headers;
            if (headers.FindHeader("Authorization", "http://mycompany.com") != -1)
            {
                string token = headers.GetHeader<string>("Authorization", "http://mycompany.com");
                return TokenValidator.ValidateToken(token);
            }

            return false; // Deny access if no valid token found
        }

        private string GetRestHeader(OperationContext operationContext, string headerName)
        {
            if (operationContext.IncomingMessageProperties.TryGetValue(HttpRequestMessageProperty.Name, out var httpRequestMessageObject))
            {
                var httpRequestMessage = httpRequestMessageObject as HttpRequestMessageProperty;
                if (httpRequestMessage != null)
                {
                    return httpRequestMessage.Headers[headerName];
                }
            }
            return null;
        }
    }
}

<configuration>
  <system.serviceModel>
    <behaviors>
      <serviceBehaviors>
        <behavior name="CustomAuthorizationBehavior">
          <serviceAuthorization serviceAuthorizationManagerType="MyServiceLibrary.CustomAuthorizationManager, MyServiceLibrary"/>
          <serviceMetadata httpGetEnabled="true" httpsGetEnabled="true"/>
          <serviceDebug includeExceptionDetailInFaults="false"/>
        </behavior>
      </serviceBehaviors>
      <endpointBehaviors>
        <behavior name="web">
          <webHttp/>
        </behavior>
      </endpointBehaviors>
    </behaviors>
    <services>
      <service name="MyServiceLibrary.MyService" behaviorConfiguration="CustomAuthorizationBehavior">
        <endpoint address="rest" binding="webHttpBinding" contract="MyServiceLibrary.IMyService" behaviorConfiguration="web"/>
        <endpoint address="soap" binding="basicHttpBinding" contract="MyServiceLibrary.IMyService"/>
        <endpoint address="mex" binding="mexHttpBinding" contract="IMetadataExchange"/>
      </service>
    </services>
  </system.serviceModel>
</configuration>
