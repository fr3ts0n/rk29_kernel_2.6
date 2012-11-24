/*  --------------------------------------------------------------------------------------------------------
 *  Copyright(C), 2010-2011, Fuzhou Rockchip Co., Ltd.  All Rights Reserved.
 *
 *  File:   custom_log.h 
 *
 *  Desc:   ChenZhen ƫ�õ� log ����Ķ���ʵ��. 
 *
 *          -----------------------------------------------------------------------------------
 *          < ϰ�� �� ������ > : 
 *
 *          -----------------------------------------------------------------------------------
 *
 *  Usage:	���ñ� log ������ .c �ļ�, ��Ҫʹ������� log ����, 
 *          ������� inclue ���ļ�֮ǰ, "#define ENABLE_DEBUG_LOG" ��. 
 *  Note:
 *
 *  Author: ChenZhen
 *
 *  --------------------------------------------------------------------------------------------------------
 *  Version:
 *          v1.0
 *  --------------------------------------------------------------------------------------------------------
 *  Log:
	----Fri Nov 19 15:20:28 2010            v1.0
 *        
 *  --------------------------------------------------------------------------------------------------------
 */


#ifndef __CUSTOM_LOG_H__
#define __CUSTOM_LOG_H__

#ifdef __cplusplus
extern "C" {
#endif

/* ---------------------------------------------------------------------------------------------------------
 *  Include Files
 * ---------------------------------------------------------------------------------------------------------
 */
#include <linux/kernel.h>


/* ---------------------------------------------------------------------------------------------------------
 *  Macros Definition 
 * ---------------------------------------------------------------------------------------------------------
 */
    
#ifdef ENABLE_DEBUG_LOG
#define D(fmt, args...) \
    { printk("[File]:%s; [Line]:%d; [Func]:%s(); " fmt "\n", __FILE__, __LINE__, __FUNCTION__, ## args); }
#else
#define  D(...)  ((void)0)
#endif

#define W(fmt, args...) \
    { printk("WARNING :: [File]:%s; [Line]:%d; [Func]:%s() :: " fmt "\n", __FILE__, __LINE__, __FUNCTION__, ## args); }

#define  E(fmt, args...) \
    { printk("ERROR :: [File]:%s; [Line]:%d; [Func]:%s() :: " fmt "\n", __FILE__, __LINE__, __FUNCTION__, ## args); }
    


/* ---------------------------------------------------------------------------------------------------------
 *  Types and Structures Definition
 * --------------------------------------------------------------------------------------------------------- */


/* ---------------------------------------------------------------------------------------------------------
 *  Global Functions' Prototype
 * ---------------------------------------------------------------------------------------------------------
 */


/* ---------------------------------------------------------------------------------------------------------
 *  Inline Functions Implementation 
 * ---------------------------------------------------------------------------------------------------------
 */

#ifdef __cplusplus
}
#endif

#endif /* __CUSTOM_LOG_H__ */
