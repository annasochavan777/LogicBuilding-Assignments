filebeat.inputs:
- type: log
  enabled: true
  paths:
    - /path/to/your/log/*.log
  fields:
    log_type: your_log_type
  fields_under_root: true
