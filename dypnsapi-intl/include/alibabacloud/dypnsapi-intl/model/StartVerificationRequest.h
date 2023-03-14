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

#ifndef ALIBABACLOUD_DYPNSAPI_INTL_MODEL_STARTVERIFICATIONREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_INTL_MODEL_STARTVERIFICATIONREQUEST_H_

#include <alibabacloud/dypnsapi-intl/Dypnsapi_intlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi_intl {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_INTL_EXPORT StartVerificationRequest : public RpcServiceRequest {
public:
	StartVerificationRequest();
	~StartVerificationRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getChannel() const;
	void setChannel(const std::string &channel);
	std::string getServiceSid() const;
	void setServiceSid(const std::string &serviceSid);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTo() const;
	void setTo(const std::string &to);

private:
	long resourceOwnerId_;
	std::string channel_;
	std::string serviceSid_;
	std::string accessKeyId_;
	std::string routeName_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string to_;
};
} // namespace Model
} // namespace Dypnsapi_intl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_INTL_MODEL_STARTVERIFICATIONREQUEST_H_
