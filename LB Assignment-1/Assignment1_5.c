//////////////////////////////////////////////////////////////
// Accept one number from user and print that number of * on screen.
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
void Accept(int iNo)
{
	for(int iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*");
	}
}

int main()
{
	int iValue = 0;
	iValue = 5;
	Accept(iValue);
	return 0;
}

using System;
using System.ServiceModel;
using System.ServiceModel.Web;

public class TokenAuthorizationAttribute : Attribute, IOperationBehavior, IDispatchMessageInspector
{
    public void Validate(OperationDescription operationDescription)
    {
        // Implementation for validating operation
    }

    public object BeforeReceiveRequest(ref System.ServiceModel.Channels.Message request, IClientChannel channel, InstanceContext instanceContext)
    {
        // Get the token from the Authorization header
        var httpRequest = (HttpRequestMessageProperty)request.Properties[HttpRequestMessageProperty.Name];
        string authHeader = httpRequest.Headers["Authorization"];
        
        if (authHeader == null || !authHeader.StartsWith("Bearer"))
        {
            // Return HTTP 401 if token is not present
            throw new FaultException("Unauthorized request");
        }

        // Extract the token
        string token = authHeader.Substring("Bearer ".Length).Trim();

        // Validate the token
        bool isValid = ValidateToken(token);

        if (!isValid)
        {
            // Return HTTP 401 if token is invalid
            throw new FaultException("Unauthorized request");
        }

        return null;
    }

    // Token validation logic
    private bool ValidateToken(string token)
    {
        // Validate the token (check its presence in the database, expiration, etc.)
        // Return true if the token is valid; otherwise, false
        // Add your token validation logic here
        
        return true; // Placeholder for actual validation logic
    }

    // Implement IOperationBehavior methods
    public void AddBindingParameters(OperationDescription operationDescription, BindingParameterCollection bindingParameters) { }
    public void ApplyClientBehavior(OperationDescription operationDescription, ClientOperation clientOperation) { }
    public void ApplyDispatchBehavior(OperationDescription operationDescription, DispatchOperation dispatchOperation)
    {
        dispatchOperation.ParameterInspectors.Add(this);
    }
    public void Validate(OperationDescription operationDescription) { }
}
