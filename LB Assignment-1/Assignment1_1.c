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


using System.ServiceModel;

public class CustomAuthorizationManager : ServiceAuthorizationManager
{
    protected override bool CheckAccessCore(OperationContext operationContext)
    {
        var headers = operationContext.RequestContext.RequestMessage.Headers;

        // For REST, check the HTTP Authorization header
        if (WebOperationContext.Current != null)
        {
            string authHeader = WebOperationContext.Current.IncomingRequest.Headers["Authorization"];
            if (!string.IsNullOrEmpty(authHeader) && authHeader.StartsWith("Bearer "))
            {
                string token = authHeader.Substring("Bearer ".Length).Trim();
                return TokenValidator.ValidateToken(token);
            }
        }
        // For SOAP, check a custom SOAP header
        else if (headers.FindHeader("Authorization", "http://mycompany.com") != -1)
        {
            string token = headers.GetHeader<string>("Authorization", "http://mycompany.com");
            return TokenValidator.ValidateToken(token);
        }

        return false; // Deny access if no valid token found
    }
}
<configuration>
  <system.serviceModel>
    <behaviors>
      <serviceBehaviors>
        <behavior name="CustomAuthorizationBehavior">
          <serviceAuthorization serviceAuthorizationManagerType="Namespace.CustomAuthorizationManager, AssemblyName"/>
          <serviceMetadata httpGetEnabled="true" httpsGetEnabled="true"/>
          <serviceDebug includeExceptionDetailInFaults="false"/>
        </behavior>
      </serviceBehaviors>
    </behaviors>
    <services>
      <service name="Namespace.MyService" behaviorConfiguration="CustomAuthorizationBehavior">
        <endpoint address="rest" binding="webHttpBinding" contract="Namespace.IMyService" behaviorConfiguration="web">
          <identity>
            <dns value="localhost"/>
          </identity>
        </endpoint>
        <endpoint address="soap" binding="basicHttpBinding" contract="Namespace.IMyService">
          <identity>
            <dns value="localhost"/>
          </identity>
        </endpoint>
        <endpoint address="mex" binding="mexHttpBinding" contract="IMetadataExchange"/>
      </service>
    </services>
    <bindings>
      <webHttpBinding>
        <binding name="web"/>
      </webHttpBinding>
    </bindings>
  </system.serviceModel>
</configuration>
