#ifndef IOCTLSUPPORT_H
#define IOCTLSUPPORT_H

#define PRINTER_IOC_MAGIC 'p'

#define PRINTER_WRITE _IOW(PRINTER_IOC_MAGIC, 0, long)

#define PRINTER_IOC_MAXNR 1

#endif
