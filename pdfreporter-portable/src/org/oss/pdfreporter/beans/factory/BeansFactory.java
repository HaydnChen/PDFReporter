/*******************************************************************************
 * Copyright (c) 2015 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Contributors:
 *     Open Software Solutions GmbH
 ******************************************************************************/
package org.oss.pdfreporter.beans.factory;

import org.oss.pdfreporter.beans.BeanUtils;
import org.oss.pdfreporter.commons.beans.IBeansUtils;
import org.oss.pdfreporter.commons.beans.factory.IBeansFactory;
import org.oss.pdfreporter.registry.IRegistry;


public class BeansFactory implements IBeansFactory {

	public static void registerFactory() {
		IRegistry.register(new BeansFactory());
	}

	@Override
	public IBeansUtils newBeansUtils() {
		return new BeanUtils();
	}

}
