/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSLocationInfo_H_
#define	_GANSSLocationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GANSSTODm.h"
#include <NativeInteger.h>
#include "GANSSTODUncertainty.h"
#include "FixType.h"
#include "PositionData.h"
#include "Ext-GeographicalInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReferenceFrame;

/* GANSSLocationInfo */
typedef struct GANSSLocationInfo {
	struct ReferenceFrame	*referenceFrame	/* OPTIONAL */;
	GANSSTODm_t	*ganssTODm	/* OPTIONAL */;
	long	*ganssTODFrac	/* OPTIONAL */;
	GANSSTODUncertainty_t	*ganssTODUncertainty	/* OPTIONAL */;
	long	*ganssTimeID	/* OPTIONAL */;
	FixType_t	 fixType;
	PositionData_t	 posData;
	long	*stationaryIndication	/* OPTIONAL */;
	Ext_GeographicalInformation_t	 posEstimate;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSLocationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSLocationInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferenceFrame.h"

#endif	/* _GANSSLocationInfo_H_ */
#include <asn_internal.h>
