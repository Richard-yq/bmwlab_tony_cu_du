/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_CSI_ReportConfig_H_
#define	_CSI_ReportConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-ReportConfigId.h"
#include "ServCellIndex.h"
#include "CSI-ResourceConfigId.h"
#include <NativeEnumerated.h>
#include "CSI-ReportPeriodicityAndOffset.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include "P0-PUSCH-AlphaSetId.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <NULL.h>
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_ReportConfig__reportConfigType_PR {
	CSI_ReportConfig__reportConfigType_PR_NOTHING,	/* No components present */
	CSI_ReportConfig__reportConfigType_PR_periodic,
	CSI_ReportConfig__reportConfigType_PR_semiPersistentOnPUCCH,
	CSI_ReportConfig__reportConfigType_PR_semiPersistentOnPUSCH,
	CSI_ReportConfig__reportConfigType_PR_aperiodic
} CSI_ReportConfig__reportConfigType_PR;
typedef enum CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig {
	CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl5	= 0,
	CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl10	= 1,
	CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl20	= 2,
	CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl40	= 3,
	CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl80	= 4,
	CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl160	= 5,
	CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig_sl320	= 6
} e_CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotConfig;
typedef enum CSI_ReportConfig__reportQuantity_PR {
	CSI_ReportConfig__reportQuantity_PR_NOTHING,	/* No components present */
	CSI_ReportConfig__reportQuantity_PR_none,
	CSI_ReportConfig__reportQuantity_PR_cri_RI_PMI_CQI,
	CSI_ReportConfig__reportQuantity_PR_cri_RI_i1,
	CSI_ReportConfig__reportQuantity_PR_cri_RI_i1_CQI,
	CSI_ReportConfig__reportQuantity_PR_cri_RI_CQI,
	CSI_ReportConfig__reportQuantity_PR_cri_RSRP,
	CSI_ReportConfig__reportQuantity_PR_ssb_Index_RSRP,
	CSI_ReportConfig__reportQuantity_PR_cri_RI_LI_PMI_CQI
} CSI_ReportConfig__reportQuantity_PR;
typedef enum CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI {
	CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI_n2	= 0,
	CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI_n4	= 1
} e_CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI__pdsch_BundleSizeForCSI;
typedef enum CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator {
	CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator_widebandCQI	= 0,
	CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator_subbandCQI	= 1
} e_CSI_ReportConfig__reportFreqConfiguration__cqi_FormatIndicator;
typedef enum CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator {
	CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator_widebandPMI	= 0,
	CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator_subbandPMI	= 1
} e_CSI_ReportConfig__reportFreqConfiguration__pmi_FormatIndicator;
typedef enum CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR {
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_NOTHING,	/* No components present */
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands3,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands4,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands5,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands6,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands7,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands8,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands9,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands10,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands11,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands12,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands13,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands14,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands15,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands16,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands17,
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands18,
	/* Extensions may appear below */
	CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR_subbands19_v1530
} CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR;
typedef enum CSI_ReportConfig__timeRestrictionForChannelMeasurements {
	CSI_ReportConfig__timeRestrictionForChannelMeasurements_configured	= 0,
	CSI_ReportConfig__timeRestrictionForChannelMeasurements_notConfigured	= 1
} e_CSI_ReportConfig__timeRestrictionForChannelMeasurements;
typedef enum CSI_ReportConfig__timeRestrictionForInterferenceMeasurements {
	CSI_ReportConfig__timeRestrictionForInterferenceMeasurements_configured	= 0,
	CSI_ReportConfig__timeRestrictionForInterferenceMeasurements_notConfigured	= 1
} e_CSI_ReportConfig__timeRestrictionForInterferenceMeasurements;
typedef enum CSI_ReportConfig__dummy {
	CSI_ReportConfig__dummy_n1	= 0,
	CSI_ReportConfig__dummy_n2	= 1
} e_CSI_ReportConfig__dummy;
typedef enum CSI_ReportConfig__groupBasedBeamReporting_PR {
	CSI_ReportConfig__groupBasedBeamReporting_PR_NOTHING,	/* No components present */
	CSI_ReportConfig__groupBasedBeamReporting_PR_enabled,
	CSI_ReportConfig__groupBasedBeamReporting_PR_disabled
} CSI_ReportConfig__groupBasedBeamReporting_PR;
typedef enum CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS {
	CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n1	= 0,
	CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n2	= 1,
	CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n3	= 2,
	CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS_n4	= 3
} e_CSI_ReportConfig__groupBasedBeamReporting__disabled__nrofReportedRS;
typedef enum CSI_ReportConfig__cqi_Table {
	CSI_ReportConfig__cqi_Table_table1	= 0,
	CSI_ReportConfig__cqi_Table_table2	= 1,
	CSI_ReportConfig__cqi_Table_table3	= 2,
	CSI_ReportConfig__cqi_Table_spare1	= 3
} e_CSI_ReportConfig__cqi_Table;
typedef enum CSI_ReportConfig__subbandSize {
	CSI_ReportConfig__subbandSize_value1	= 0,
	CSI_ReportConfig__subbandSize_value2	= 1
} e_CSI_ReportConfig__subbandSize;
typedef enum CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530 {
	CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530_sl4	= 0,
	CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530_sl8	= 1,
	CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530_sl16	= 2
} e_CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530__reportSlotConfig_v1530;

/* Forward declarations */
struct CodebookConfig;
struct PUCCH_CSI_Resource;
struct PortIndexFor8Ranks;

/* CSI-ReportConfig */
typedef struct CSI_ReportConfig {
	CSI_ReportConfigId_t	 reportConfigId;
	ServCellIndex_t	*carrier;	/* OPTIONAL */
	CSI_ResourceConfigId_t	 resourcesForChannelMeasurement;
	CSI_ResourceConfigId_t	*csi_IM_ResourcesForInterference;	/* OPTIONAL */
	CSI_ResourceConfigId_t	*nzp_CSI_RS_ResourcesForInterference;	/* OPTIONAL */
	struct CSI_ReportConfig__reportConfigType {
		CSI_ReportConfig__reportConfigType_PR present;
		union CSI_ReportConfig__reportConfigType_u {
			struct CSI_ReportConfig__reportConfigType__periodic {
				CSI_ReportPeriodicityAndOffset_t	 reportSlotConfig;
				struct CSI_ReportConfig__reportConfigType__periodic__pucch_CSI_ResourceList {
					A_SEQUENCE_OF(struct PUCCH_CSI_Resource) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} pucch_CSI_ResourceList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *periodic;
			struct CSI_ReportConfig__reportConfigType__semiPersistentOnPUCCH {
				CSI_ReportPeriodicityAndOffset_t	 reportSlotConfig;
				struct CSI_ReportConfig__reportConfigType__semiPersistentOnPUCCH__pucch_CSI_ResourceList {
					A_SEQUENCE_OF(struct PUCCH_CSI_Resource) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} pucch_CSI_ResourceList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semiPersistentOnPUCCH;
			struct CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH {
				long	 reportSlotConfig;
				struct CSI_ReportConfig__reportConfigType__semiPersistentOnPUSCH__reportSlotOffsetList {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} reportSlotOffsetList;
				P0_PUSCH_AlphaSetId_t	 p0alpha;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semiPersistentOnPUSCH;
			struct CSI_ReportConfig__reportConfigType__aperiodic {
				struct CSI_ReportConfig__reportConfigType__aperiodic__reportSlotOffsetList {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} reportSlotOffsetList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodic;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportConfigType;
	struct CSI_ReportConfig__reportQuantity {
		CSI_ReportConfig__reportQuantity_PR present;
		union CSI_ReportConfig__reportQuantity_u {
			NULL_t	 none;
			NULL_t	 cri_RI_PMI_CQI;
			NULL_t	 cri_RI_i1;
			struct CSI_ReportConfig__reportQuantity__cri_RI_i1_CQI {
				long	*pdsch_BundleSizeForCSI;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cri_RI_i1_CQI;
			NULL_t	 cri_RI_CQI;
			NULL_t	 cri_RSRP;
			NULL_t	 ssb_Index_RSRP;
			NULL_t	 cri_RI_LI_PMI_CQI;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportQuantity;
	struct CSI_ReportConfig__reportFreqConfiguration {
		long	*cqi_FormatIndicator;	/* OPTIONAL */
		long	*pmi_FormatIndicator;	/* OPTIONAL */
		struct CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand {
			CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_PR present;
			union CSI_ReportConfig__reportFreqConfiguration__csi_ReportingBand_u {
				BIT_STRING_t	 subbands3;
				BIT_STRING_t	 subbands4;
				BIT_STRING_t	 subbands5;
				BIT_STRING_t	 subbands6;
				BIT_STRING_t	 subbands7;
				BIT_STRING_t	 subbands8;
				BIT_STRING_t	 subbands9;
				BIT_STRING_t	 subbands10;
				BIT_STRING_t	 subbands11;
				BIT_STRING_t	 subbands12;
				BIT_STRING_t	 subbands13;
				BIT_STRING_t	 subbands14;
				BIT_STRING_t	 subbands15;
				BIT_STRING_t	 subbands16;
				BIT_STRING_t	 subbands17;
				BIT_STRING_t	 subbands18;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				BIT_STRING_t	 subbands19_v1530;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *csi_ReportingBand;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reportFreqConfiguration;
	long	 timeRestrictionForChannelMeasurements;
	long	 timeRestrictionForInterferenceMeasurements;
	struct CodebookConfig	*codebookConfig;	/* OPTIONAL */
	long	*dummy;	/* OPTIONAL */
	struct CSI_ReportConfig__groupBasedBeamReporting {
		CSI_ReportConfig__groupBasedBeamReporting_PR present;
		union CSI_ReportConfig__groupBasedBeamReporting_u {
			NULL_t	 enabled;
			struct CSI_ReportConfig__groupBasedBeamReporting__disabled {
				long	*nrofReportedRS;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *disabled;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} groupBasedBeamReporting;
	long	*cqi_Table;	/* OPTIONAL */
	long	 subbandSize;
	struct CSI_ReportConfig__non_PMI_PortIndication {
		A_SEQUENCE_OF(struct PortIndexFor8Ranks) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *non_PMI_PortIndication;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CSI_ReportConfig__ext1 {
		struct CSI_ReportConfig__ext1__semiPersistentOnPUSCH_v1530 {
			long	 reportSlotConfig_v1530;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *semiPersistentOnPUSCH_v1530;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_ReportConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportSlotConfig_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_BundleSizeForCSI_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cqi_FormatIndicator_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_FormatIndicator_47;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_timeRestrictionForChannelMeasurements_69;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_timeRestrictionForInterferenceMeasurements_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_76;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nrofReportedRS_82;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cqi_Table_87;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subbandSize_92;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportSlotConfig_v1530_100;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_ReportConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_ReportConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_ReportConfig_1[17];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_ReportConfig_H_ */
#include <asn_internal.h>