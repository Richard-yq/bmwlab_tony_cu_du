/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RRCReconfigurationComplete_H_
#define	_RRCReconfigurationComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCReconfigurationComplete__criticalExtensions_PR {
	RRCReconfigurationComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCReconfigurationComplete__criticalExtensions_PR_rrcReconfigurationComplete,
	RRCReconfigurationComplete__criticalExtensions_PR_criticalExtensionsFuture
} RRCReconfigurationComplete__criticalExtensions_PR;

/* Forward declarations */
struct RRCReconfigurationComplete_IEs;

/* RRCReconfigurationComplete */
typedef struct RRCReconfigurationComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCReconfigurationComplete__criticalExtensions {
		RRCReconfigurationComplete__criticalExtensions_PR present;
		union RRCReconfigurationComplete__criticalExtensions_u {
			struct RRCReconfigurationComplete_IEs	*rrcReconfigurationComplete;
			struct RRCReconfigurationComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfigurationComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfigurationComplete;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfigurationComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfigurationComplete_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCReconfigurationComplete_H_ */
#include <asn_internal.h>
