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

#ifndef ALIBABACLOUD_ECD_MODEL_DETACHENDUSERREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DETACHENDUSERREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DetachEndUserRequest : public RpcServiceRequest {
public:
	DetachEndUserRequest();
	~DetachEndUserRequest();
	std::string getClientType() const;
	void setClientType(const std::string &clientType);
	std::string getDeviceId() const;
	void setDeviceId(const std::string &deviceId);
	std::string getAdDomain() const;
	void setAdDomain(const std::string &adDomain);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::string getDirectoryId() const;
	void setDirectoryId(const std::string &directoryId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string clientType_;
	std::string deviceId_;
	std::string adDomain_;
	std::string endUserId_;
	std::string directoryId_;
	std::string region_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DETACHENDUSERREQUEST_H_
