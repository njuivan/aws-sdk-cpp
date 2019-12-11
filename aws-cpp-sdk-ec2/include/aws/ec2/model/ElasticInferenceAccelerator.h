﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p> Describes an elastic inference accelerator. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ElasticInferenceAccelerator">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ElasticInferenceAccelerator
  {
  public:
    ElasticInferenceAccelerator();
    ElasticInferenceAccelerator(const Aws::Utils::Xml::XmlNode& xmlNode);
    ElasticInferenceAccelerator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline ElasticInferenceAccelerator& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline ElasticInferenceAccelerator& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of elastic inference accelerator. The possible values are
     * <code>eia1.medium</code>, <code>eia1.large</code>, and <code>eia1.xlarge</code>.
     * </p>
     */
    inline ElasticInferenceAccelerator& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p> The number of elastic inference accelerators of given type to be attached to
     * the instance. Only positive values allowed. If not specified defaults to 1. </p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p> The number of elastic inference accelerators of given type to be attached to
     * the instance. Only positive values allowed. If not specified defaults to 1. </p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p> The number of elastic inference accelerators of given type to be attached to
     * the instance. Only positive values allowed. If not specified defaults to 1. </p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p> The number of elastic inference accelerators of given type to be attached to
     * the instance. Only positive values allowed. If not specified defaults to 1. </p>
     */
    inline ElasticInferenceAccelerator& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
