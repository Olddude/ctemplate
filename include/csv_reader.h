#ifndef CSV_READER_H
#define CSV_READER_H

void read_csv_file(const char* file_path, void (*worker_thread)(char*));

#endif

