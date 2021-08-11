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

#ifndef ALIBABACLOUD_CBN_MODEL_UPDATETRANSITROUTERVPCATTACHMENTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_UPDATETRANSITROUTERVPCATTACHMENTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT UpdateTransitRouterVpcAttachmentAttributeRequest : public RpcServiceRequest
			{

			public:
				UpdateTransitRouterVpcAttachmentAttributeRequest();
				~UpdateTransitRouterVpcAttachmentAttributeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getTransitRouterAttachmentName()const;
				void setTransitRouterAttachmentName(const std::string& transitRouterAttachmentName);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getTransitRouterAttachmentId()const;
				void setTransitRouterAttachmentId(const std::string& transitRouterAttachmentId);
				std::string getTransitRouterAttachmentDescription()const;
				void setTransitRouterAttachmentDescription(const std::string& transitRouterAttachmentDescription);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string transitRouterAttachmentName_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string resourceType_;
				std::string transitRouterAttachmentId_;
				std::string transitRouterAttachmentDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_UPDATETRANSITROUTERVPCATTACHMENTATTRIBUTEREQUEST_H_