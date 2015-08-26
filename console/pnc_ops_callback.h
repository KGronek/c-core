#include "pnc_config.h"
#include "pnc_subscriptions.h"

void pnc_ops_init();

void ops_callback(pubnub_t *pn, enum pubnub_trans trans, enum pubnub_res result);
void subscribe_callback(pubnub_t *pn_sub, enum pubnub_trans trans, enum pubnub_res result);

void pnc_ops_subscribe(pubnub_t *pn);
void pnc_ops_subscribe_thr(void *pn_sub);
void pnc_ops_presence(pubnub_t *pn, char *channel);
void pnc_ops_unsubscribe(pubnub_t *pn);

void pnc_ops_parse_response(const char *method_name, enum pubnub_res res, pubnub_t *pn);
void pnc_ops_parse_callback(enum pubnub_trans method_name, enum pubnub_res res, pubnub_t *pn);