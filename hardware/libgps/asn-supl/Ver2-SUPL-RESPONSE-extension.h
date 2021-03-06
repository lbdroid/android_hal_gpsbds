/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-message-extensions"
 * 	found in "../ulp-version2-message-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_Ver2_SUPL_RESPONSE_extension_H_
#define	_Ver2_SUPL_RESPONSE_extension_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SPCSETKey.h"
#include "SPCSETKeylifetime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedNetworkInformation;
struct SPCTID;
struct Position;
struct GNSSPosTechnology;

/* Ver2-SUPL-RESPONSE-extension */
typedef struct Ver2_SUPL_RESPONSE_extension {
	struct SupportedNetworkInformation	*supportedNetworkInformation	/* OPTIONAL */;
	SPCSETKey_t	*sPCSETKey	/* OPTIONAL */;
	struct SPCTID	*sPCTID	/* OPTIONAL */;
	SPCSETKeylifetime_t	*sPCSETKeylifetime	/* OPTIONAL */;
	struct Position	*initialApproximateposition	/* OPTIONAL */;
	struct GNSSPosTechnology	*gnssPosTechnology	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ver2_SUPL_RESPONSE_extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ver2_SUPL_RESPONSE_extension;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedNetworkInformation.h"
#include "SPCTID.h"
#include "Position.h"
#include "GNSSPosTechnology.h"

#endif	/* _Ver2_SUPL_RESPONSE_extension_H_ */
#include <asn_internal.h>
