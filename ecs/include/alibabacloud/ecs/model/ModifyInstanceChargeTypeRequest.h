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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyInstanceChargeTypeRequest : public RpcServiceRequest {
public:
	struct PromotionOptions {
		std::string couponNo;
	};
	ModifyInstanceChargeTypeRequest();
	~ModifyInstanceChargeTypeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getIsDetailFee() const;
	void setIsDetailFee(bool isDetailFee);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	int getPeriod() const;
	void setPeriod(int period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	bool getIncludeDataDisks() const;
	void setIncludeDataDisks(bool includeDataDisks);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	PromotionOptions getPromotionOptions() const;
	void setPromotionOptions(const PromotionOptions &promotionOptions);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string regionId_;
	bool isDetailFee_;
	std::string instanceChargeType_;
	int period_;
	bool dryRun_;
	bool autoPay_;
	bool includeDataDisks_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	PromotionOptions promotionOptions_;
	std::string periodUnit_;
	std::string instanceIds_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
