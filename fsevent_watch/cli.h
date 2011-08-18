#ifndef CLI_H
#define CLI_H

#define CLI_NAME "fsevent_watch"
#define CLI_VERSION "0.0.1"

#include "common.h"

struct cli_info {
  UInt64 since_when_arg;
  double latency_arg;
  bool no_defer_flag;
  bool watch_root_flag;
  bool ignore_self_flag;
  bool file_events_flag;
  enum FSEventWatchOutputFormat format_arg;

  char **inputs;
  unsigned inputs_num;
};

extern const char *cli_info_purpose;
extern const char *cli_info_usage;
extern const char *cli_info_help[];

void cli_print_help(void);
void cli_print_version(void);

int cli_parser (int argc, const char **argv, struct cli_info *args_info);
void cli_parser_init (struct cli_info *args_info);
void cli_parser_free (struct cli_info *args_info);


#endif /* CLI_H */
