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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVBRATTACHMENTSREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVBRATTACHMENTSREQUEST_H_

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
			class ALIBABACLOUD_CBN_EXPORT ListTransitRouterVbrAttachmentsRequest : public RpcServiceRequest
			{

			public:
				ListTransitRouterVbrAttachmentsRequest();
				~ListTransitRouterVbrAttachmentsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCenId()const;
				void setCenId(const std::string& cenId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTransitRouterId()const;
				void setTransitRouterId(const std::string& transitRouterId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getTransitRouterAttachmentId()const;
				void setTransitRouterAttachmentId(const std::string& transitRouterAttachmentId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);

            private:
				long resourceOwnerId_;
				std::string cenId_;
				std::string regionId_;
				std::string nextToken_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string transitRouterId_;
				std::string resourceType_;
				std::string transitRouterAttachmentId_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERVBRATTACHMENTSREQUEST_H_