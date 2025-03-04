/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATENACOSCONFIGREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATENACOSCONFIGREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateNacosConfigRequest : public RpcServiceRequest {
public:
	UpdateNacosConfigRequest();
	~UpdateNacosConfigRequest();
	std::string getEncryptedDataKey() const;
	void setEncryptedDataKey(const std::string &encryptedDataKey);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getGroup() const;
	void setGroup(const std::string &group);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getBetaIps() const;
	void setBetaIps(const std::string &betaIps);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDataId() const;
	void setDataId(const std::string &dataId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getDesc() const;
	void setDesc(const std::string &desc);
	std::string getMd5() const;
	void setMd5(const std::string &md5);

private:
	std::string encryptedDataKey_;
	std::string type_;
	std::string content_;
	std::string appName_;
	std::string namespaceId_;
	std::string group_;
	std::string tags_;
	std::string betaIps_;
	std::string instanceId_;
	std::string dataId_;
	std::string acceptLanguage_;
	std::string desc_;
	std::string md5_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATENACOSCONFIGREQUEST_H_
