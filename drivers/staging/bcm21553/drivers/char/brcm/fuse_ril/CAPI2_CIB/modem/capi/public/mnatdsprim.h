/*******************************************************************************************
Copyright 2010 Broadcom Corporation.  All rights reserved.

Unless you and Broadcom execute a separate written software license agreement
governing use of this software, this software is licensed to you under the
terms of the GNU General Public License version 2, available at
http://www.gnu.org/copyleft/gpl.html (the "GPL").

Notwithstanding the above, under no circumstances may you combine this software
in any way with any other Broadcom software provided under a license other than
the GPL, without Broadcom's express prior written consent.
*******************************************************************************************/
/**
*
*   @file   mnatdsprim.h
*
*   @brief  This file defines the functions that interface with, and
*			generate, MNATDS primitives.
*
****************************************************************************/

#ifndef _MSC_MNATDSPRIM_H_
#define _MSC_MNATDSPRIM_H_




//******************************************************************************
// Direct Call Definitions
//******************************************************************************

void MNATDSPRIM_TxPrim(MNATDSMsg_t *msg);

void MNATDSPRIM_RxPrim(PrimPtr_t Primitive);

void MnAtds_SetupDataCall(	ClientInfo_t*			inClientInfoPtr,
							MNATDSParmSetupReq_t*	inMnAtdsSetupReqPtr);
 
void MnAtds_AnswerDataCall(	ClientInfo_t*			inClientInfoPtr,
							MNATDSParmSetupResp_t*	resp);

//This isn't called anyware: shall be removed
void MN_ReleaseDataCall(ClientInfo_t*	inClientInfoPtr,
						CallRelCause_t	cause);

void MnAtds_SendConnectionReady(ClientInfo_t* inClientInfoPtr);
#endif

