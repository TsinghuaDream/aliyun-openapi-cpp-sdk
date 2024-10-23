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

#ifndef ALIBABACLOUD_IMS_MODEL_SETPASSWORDPOLICYRESULT_H_
#define ALIBABACLOUD_IMS_MODEL_SETPASSWORDPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ims/ImsExport.h>

namespace AlibabaCloud
{
	namespace Ims
	{
		namespace Model
		{
			class ALIBABACLOUD_IMS_EXPORT SetPasswordPolicyResult : public ServiceResult
			{
			public:
				struct PasswordPolicy
				{
					int minimumPasswordLength;
					bool requireLowercaseCharacters;
					bool hardExpire;
					bool requireNumbers;
					int passwordReusePrevention;
					bool passwordNotContainUserName;
					int maxPasswordAge;
					int maxLoginAttemps;
					bool requireUppercaseCharacters;
					int minimumPasswordDifferentCharacter;
					bool requireSymbols;
				};


				SetPasswordPolicyResult();
				explicit SetPasswordPolicyResult(const std::string &payload);
				~SetPasswordPolicyResult();
				PasswordPolicy getPasswordPolicy()const;

			protected:
				void parse(const std::string &payload);
			private:
				PasswordPolicy passwordPolicy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMS_MODEL_SETPASSWORDPOLICYRESULT_H_