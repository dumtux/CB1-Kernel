/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __NAND_INFO_INIT_V2_H__
#define __NAND_INFO_INIT_V2_H__

#include "../nand-partition/phy.h"

int read_partition_v3(struct _nand_info *nand_info, struct _boot_info *boot);
int nand_info_init_v3(struct _nand_info *nand_info, uchar chip, uint16 start_block, uchar *mbr_data);
void print_boot_info(struct _nand_info *nand_info);
unsigned int get_no_use_block_v3(struct _nand_info *nand_info, uchar chip, uint16 start_block);
int nand_info_init_v2(struct _nand_info *nand_info, uchar chip, uint16 start_block, uchar *mbr_data);
int nand_info_init(struct _nand_info *nand_info, uchar chip, uint16 start_block, uchar *mbr_data);
int read_mbr_partition_v3(struct _nand_info *nand_info, unsigned int chip, unsigned int start_block);
int read_factory_block_v3(struct _nand_info *nand_info, unsigned int chip, unsigned int start_block);
int write_mbr_v2(struct _nand_info *nand_info);
int read_mbr_v2(struct _nand_info *nand_info, unsigned int nDieNum, unsigned int nBlkNum);
int check_mbr_v3(struct _nand_info *nand_info, PARTITION_MBR *mbr);
int check_mbr_v2(struct _nand_info *nand_info, PARTITION_MBR *mbr);
int write_partition_v2(struct _nand_info *nand_info);
int read_partition_v2(struct _nand_info *nand_info, unsigned int nDieNum, unsigned int nBlkNum);
int check_partition_mbr_v2(struct _nand_info *nand_info, unsigned int nDieNum, unsigned int nBlkNum);
int write_factory_block_table_v2(struct _nand_info *nand_info);
int print_factory_block_table_v2(struct _nand_info *nand_info);
int write_new_block_table_v2_old(struct _nand_info *nand_info);
int write_new_block_table_v2_new(struct _nand_info *nand_info);
int write_new_block_table_v2(struct _nand_info *nand_info);
int write_new_block_table_v2_new_first_build(struct _nand_info *nand_info);
int write_no_use_block_v2(struct _nand_info *nand_info);
unsigned short read_new_bad_block_table_v2_old(struct _nand_info *nand_info);
unsigned short read_new_bad_block_table_v2_new(struct _nand_info *nand_info);
unsigned short read_new_bad_block_table_v2(struct _nand_info *nand_info);
void print_nand_info_v2(struct _nand_info *nand_info);
int get_partition_v2(struct _nand_info *nand_info);
int get_partition_v3(struct _nand_info *nand_info);
void new_print_all_partition(struct _nand_info *nand_info);
int build_all_phy_partition_v2(struct _nand_info *nand_info);
int print_mbr_data(uchar *mbr_data);
extern int BlockCheck(unsigned short nDieNum, unsigned short nBlkNum);
#endif /*NAND_INFO_INIT_V2_H*/
