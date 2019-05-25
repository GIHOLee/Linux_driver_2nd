	#include <linux/moduleparam.h>
#include <linux/export.h>
#include <linux/debugfs.h>
#include <linux/fs.h>
#include <linux/seq_file.h>
#include <linux/slab.h>
#include <linux/stat.h>
#include <linux/fault-inject.h>
#include <linux/uaccess.h>

static init __init debugfs_test_init(void)
{
	return 0;
}

static void __exit debugfs_test_exit(void)
{

}
module_init (debugfs_test_init);
module_exit (debugfs_test_exit);

