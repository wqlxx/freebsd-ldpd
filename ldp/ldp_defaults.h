
/*
 *  Copyright (C) James R. Leu 2000
 *  jleu@mindspring.com
 *
 *  This software is covered under the LGPL, for more
 *  info check out http://www.gnu.org/copyleft/lgpl.html
 */

#ifndef _LDP_DEFAULTS_H_
#define _LDP_DEFAULTS_H_

#define LDP_GLOBAL_DEF_CONTROL_MODE			LDP_CONTROL_ORDERED
#define LDP_GLOBAL_DEF_RETENTION_MODE		LDP_RETENTION_LIBERAL
#define LDP_GLOBAL_DEF_REPAIR_MODE			LDP_REPAIR_GLOBAL
#define LDP_GLOBAL_DEF_PROPOGATE_RELEASE	MPLS_BOOL_TRUE
#define LDP_GLOBAL_DEF_LABEL_MERGE			MPLS_BOOL_TRUE
#define LDP_GLOBAL_DEF_LOOP_DETECTION_MODE	LDP_LOOP_NONE
#define LDP_GLOBAL_DEF_TTLLESS_DOMAIN		MPLS_BOOL_FALSE
#define LDP_GLOBAL_DEF_LOCAL_TCP_PORT		646
#define LDP_GLOBAL_DEF_LOCAL_UDP_PORT		646
#define LDP_GLOBAL_DEF_SEND_ADDR_MSG		MPLS_BOOL_TRUE
#define LDP_GLOBAL_DEF_BACKOFF_STEP			15
#define LDP_GLOBAL_DEF_SEND_LSRID_MAPPING	MPLS_BOOL_TRUE
#define LDP_GLOBAL_DEF_NO_ROUTE_RETRY_TIME	10
#define LDP_GLOBAL_DEF_EDGE_INLABEL			MPLS_BOOL_TRUE

#define LDP_ENTITY_DEF_TRANS_ADDR		0
#define LDP_ENTITY_DEF_PROTO_VER		1
#define LDP_ENTITY_DEF_REMOTE_TCP		646
#define LDP_ENTITY_DEF_REMOTE_UDP		646
#define LDP_ENTITY_DEF_MAX_PDU			4096
#define LDP_ENTITY_DEF_KEEPALIVE_TIMER		45
#define LDP_ENTITY_DEF_KEEPALIVE_INTERVAL	15
#define LDP_ENTITY_DEF_HELLOTIME_TIMER		15
#define LDP_ENTITY_DEF_HELLOTIME_INTERVAL	5
#define LDP_ENTITY_DEF_SESSIONSETUP_COUNT	LDP_INFINIT
#define LDP_ENTITY_DEF_SESSION_BACKOFF_TIMER	10
#define LDP_ENTITY_DEF_DISTRIBUTION_MODE	LDP_DISTRIBUTION_UNSOLICITED
#define LDP_ENTITY_DEF_PATHVECTOR_LIMIT		10
#define LDP_ENTITY_DEF_HOPCOUNT_LIMIT		30
#define LDP_ENTITY_DEF_REQUEST_TIMER		30
#define LDP_ENTITY_DEF_REQUEST_COUNT		LDP_INFINIT
#define LDP_ENTITY_DEF_REQUIRE_HOPCOUNT		MPLS_BOOL_FALSE

/* you can infer this from REQUEST_COUNT */
#define LDP_ENTITY_DEF_REQUEST_RETRY		MPLS_BOOL_TRUE
#define LDP_ENTITY_DEF_INHERIT_FLAG	LDP_ENTITY_CFG_TRANS_ADDR|\
					LDP_ENTITY_CFG_KEEPALIVE_TIMER|\
					LDP_ENTITY_CFG_KEEPALIVE_INTERVAL|\
					LDP_ENTITY_CFG_HELLOTIME_TIMER|\
					LDP_ENTITY_CFG_HELLOTIME_INTERVAL

#define LDP_REQUEST_CHUNK			2

#endif