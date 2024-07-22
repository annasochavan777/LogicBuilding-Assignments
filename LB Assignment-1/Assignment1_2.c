<?xml version="1.0" encoding="utf-8" ?>
<nlog xmlns="http://www.nlog-project.org/schemas/NLog.xsd"
      xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">

  <targets>
    <!-- Define a target for the log files -->
    <target name="logfile" xsi:type="File"
            fileName="${basedir}/logs/log_${shortdate}_${hour}.log"
            layout="${longdate} ${logger} ${message}" />
  </targets>

  <rules>
    <!-- Log all messages to the log file -->
    <logger name="*" minlevel="Trace" writeTo="logfile" />
  </rules>
</nlog>
