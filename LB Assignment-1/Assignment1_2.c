<?xml version="1.0" encoding="utf-8" ?>
<nlog xmlns="http://www.nlog-project.org/schemas/NLog.xsd" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
  <targets>
    <!-- Define a target for file logging -->
    <target xsi:type="File" name="fileLogger" fileName="${basedir}/logs/log_${shortdate}.log"
            layout="${longdate}|${level:uppercase=true}|${logger}|${message}" />
  </targets>
  
  <rules>
    <!-- Define logging rules -->
    <logger name="*" minlevel="Info" writeTo="fileLogger" />
  </rules>
</nlog>
