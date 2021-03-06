/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../supl-report.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_Ver2_SUPLREPORT_H_
#define	_Ver2_SUPLREPORT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ver.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SessionList;
struct SETCapabilities;
struct ReportDataList;

/* Ver2-SUPLREPORT */
typedef struct Ver2_SUPLREPORT {
	struct SessionList	*sessionList	/* OPTIONAL */;
	struct SETCapabilities	*sETCapabilities	/* OPTIONAL */;
	struct ReportDataList	*reportDataList	/* OPTIONAL */;
	Ver_t	*ver	/* OPTIONAL */;
	NULL_t	*moreComponents	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ver2_SUPLREPORT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ver2_SUPLREPORT;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SessionList.h"
#include "SETCapabilities.h"
#include "ReportDataList.h"

#endif	/* _Ver2_SUPLREPORT_H_ */
#include <asn_internal.h>
