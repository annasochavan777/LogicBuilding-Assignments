
**Problem Statement:**

If the PCSM API changes do not go live with MSO in production, the new fields introduced will fail at RMI validation.

**Solution:** 

To address this issue, we have added a switch in MSO. When the switch is OFF, it will not consider the new MAE fields, thus preventing the PCSM call from failing.

This change requires a code merge into the release branch and deployment in SIT.
