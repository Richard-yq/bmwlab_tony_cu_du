/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_MeasurementTimingConfigurationRrc_H_
#define	_MeasurementTimingConfigurationRrc_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementTimingConfigurationRrc__criticalExtensions_PR {
	MeasurementTimingConfigurationRrc__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementTimingConfigurationRrc__criticalExtensions_PR_c1,
	MeasurementTimingConfigurationRrc__criticalExtensions_PR_criticalExtensionsFuture
} MeasurementTimingConfigurationRrc__criticalExtensions_PR;
typedef enum MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR {
	MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR_measTimingConf,
	MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR_spare3,
	MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR_spare2,
	MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR_spare1
} MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR;

/* Forward declarations */
struct MeasurementTimingConfigurationRrc_IEs;

/* MeasurementTimingConfigurationRrc */
typedef struct MeasurementTimingConfigurationRrc {
	struct MeasurementTimingConfigurationRrc__criticalExtensions {
		MeasurementTimingConfigurationRrc__criticalExtensions_PR present;
		union MeasurementTimingConfigurationRrc__criticalExtensions_u {
			struct MeasurementTimingConfigurationRrc__criticalExtensions__c1 {
				MeasurementTimingConfigurationRrc__criticalExtensions__c1_PR present;
				union MeasurementTimingConfigurationRrc__criticalExtensions__c1_u {
					struct MeasurementTimingConfigurationRrc_IEs	*measTimingConf;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct MeasurementTimingConfigurationRrc__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementTimingConfigurationRrc_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementTimingConfigurationRrc;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementTimingConfigurationRrc_H_ */
#include <asn_internal.h>
