# 第八章 基本UDP套接字编程

## 8.1 概述
使用UDP编写的常见应用程序有：DNS、NFS、SNMP

## 8.2 recvfrom和sendto函数
```c
#include <sys/socket.h>
ssize_t recvfrom(int soktfd, void *buff, size_t nbytes, int flags, struct sockaddr *from, socklen_t *addrlen);
ssize_t sendto(int sockfd, const void *buff, size_t nbytes, int flags, const struct sockaddr *to, socklen_t addrlen);
均返回；若成功则为读或写的字节数，若出错则为-1
```
sockfd、buff和nbytes：描述符、指向读入或写出缓冲区的指针和读写字节数
