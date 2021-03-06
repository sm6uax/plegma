#ifndef __CONFIG_H__
#define __CONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdlib.h>
#include "yodiwo_helpers.h"

typedef struct
{
    char    *uuid;
    char    *name;
    char    *nodeKey;
    char    *nodeSecret;
    char    *pairingServerUrl;
    char    *ypchannelServer;
    int32_t  ypchannelServerPort;
    int32_t  webPort;
    char    *mqttBrokerHostname;
    int32_t  mqttBrokerPort;
    char    *mqttBrokerCertFile;
} config_t;


int read_config(APIGenerator_AdditionalTypes_CNodeCConfig_t *config, char *filename);
int write_config(APIGenerator_AdditionalTypes_CNodeCConfig_t *config, char *filename);
APIGenerator_AdditionalTypes_CNodeConfig_t *get_active_config(APIGenerator_AdditionalTypes_CNodeCConfig_t *config);

#ifdef __cplusplus
}
#endif

#endif /* __CONFIG_H__ */
