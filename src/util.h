#ifndef fooutilhfoo
#define fooutilhfoo

void make_nonblock_fd(int fd);

void peer_to_string(char *c, size_t l, int fd);

int make_secure_dir(const char* dir);

#endif
