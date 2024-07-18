<nlog>
  <targets>
    <target xsi:type="File" name="logfile" 
            fileName="logs/${date:format=dd-MM-yyyy}/${date:format=HH}.log"
            archiveEvery="Hour"
            archiveNumbering="DateAndSequence"
            archiveDateFormat="yyyyMMddHH"
            maxArchiveFiles="6"
            />
  </targets>

  <rules>
    <logger name="*" minlevel="Info" writeTo="logfile" />
  </rules>
</nlog>
