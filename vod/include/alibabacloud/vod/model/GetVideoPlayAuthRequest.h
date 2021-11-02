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

#ifndef ALIBABACLOUD_VOD_MODEL_GETVIDEOPLAYAUTHREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETVIDEOPLAYAUTHREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetVideoPlayAuthRequest : public RpcServiceRequest
			{

			public:
				GetVideoPlayAuthRequest();
				~GetVideoPlayAuthRequest();

				std::string getReAuthInfo()const;
				void setReAuthInfo(const std::string& reAuthInfo);
				std::string getPlayConfig()const;
				void setPlayConfig(const std::string& playConfig);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				std::string getApiVersion()const;
				void setApiVersion(const std::string& apiVersion);
				long getAuthInfoTimeout()const;
				void setAuthInfoTimeout(long authInfoTimeout);

            private:
				std::string reAuthInfo_;
				std::string playConfig_;
				std::string videoId_;
				std::string apiVersion_;
				long authInfoTimeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETVIDEOPLAYAUTHREQUEST_H_