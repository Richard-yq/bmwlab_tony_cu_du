/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PeriodicalReportConfigInterRAT_H_
#define	_PeriodicalReportConfigInterRAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReportInterval.h"
#include <NativeEnumerated.h>
#include "MeasReportQuantity.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PeriodicalReportConfigInterRAT__reportAmount {
	PeriodicalReportConfigInterRAT__reportAmount_r1	= 0,
	PeriodicalReportConfigInterRAT__reportAmount_r2	= 1,
	PeriodicalReportConfigInterRAT__reportAmount_r4	= 2,
	PeriodicalReportConfigInterRAT__reportAmount_r8	= 3,
	PeriodicalReportConfigInterRAT__reportAmount_r16	= 4,
	PeriodicalReportConfigInterRAT__reportAmount_r32	= 5,
	PeriodicalReportConfigInterRAT__reportAmount_r64	= 6,
	PeriodicalReportConfigInterRAT__reportAmount_infinity	= 7
} e_PeriodicalReportConfigInterRAT__reportAmount;

/* PeriodicalReportConfigInterRAT */
typedef struct PeriodicalReportConfigInterRAT {
	ReportInterval_t	 reportInterval;
	long	 reportAmount;
	MeasReportQuantity_t	 reportQuantity;
	long	 maxReportCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PeriodicalReportConfigInterRAT_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PeriodicalReportConfigInterRAT;
extern asn_SEQUENCE_specifics_t asn_SPC_PeriodicalReportConfigInterRAT_specs_1;
extern asn_TYPE_member_t asn_MBR_PeriodicalReportConfigInterRAT_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicalReportConfigInterRAT_H_ */
#include <asn_internal.h>
