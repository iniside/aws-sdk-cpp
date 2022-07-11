﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteTransitGatewayPolicyTableRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteTransitGatewayPolicyTableRequest::DeleteTransitGatewayPolicyTableRequest() : 
    m_transitGatewayPolicyTableIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteTransitGatewayPolicyTableRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTransitGatewayPolicyTable&";
  if(m_transitGatewayPolicyTableIdHasBeenSet)
  {
    ss << "TransitGatewayPolicyTableId=" << StringUtils::URLEncode(m_transitGatewayPolicyTableId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteTransitGatewayPolicyTableRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
