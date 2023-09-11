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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATEAPPLICATIONACCESSPOINTREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_CREATEAPPLICATIONACCESSPOINTREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT CreateApplicationAccessPointRequest : public RpcServiceRequest {
public:
	CreateApplicationAccessPointRequest();
	~CreateApplicationAccessPointRequest();
	std::string getPolicies() const;
	void setPolicies(const std::string &policies);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAuthenticationMethod() const;
	void setAuthenticationMethod(const std::string &authenticationMethod);

private:
	std::string policies_;
	std::string description_;
	std::string name_;
	std::string authenticationMethod_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_CREATEAPPLICATIONACCESSPOINTREQUEST_H_
