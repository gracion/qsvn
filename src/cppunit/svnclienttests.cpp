/***************************************************************************
 *   This file is part of QSvn Project http://qsvn.berlios.de              *
 *   Copyright (c) 2004-2005 Andreas Richter <ar@oszine.de>                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License Version 2        *
 *   as published by the Free Software Foundation.                         *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                         *
 *   As a special exception, permission is given to link this program      *
 *   with any edition of Qt, and distribute the resulting executable,      *
 *   without including the source code for Qt in the source distribution.  *
 ***************************************************************************/


//QSvnTest
#include "svnclienttests.h"

//QSvn
#include "../svnclient.h"

void SvnClientTests::setUp()
{}

void SvnClientTests::tearDown()
{}

void SvnClientTests::testCheckout()
{
    CPPUNIT_ASSERT( FALSE );
}

CppUnit::Test *SvnClientTests::testSuite()
{
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "SvnClientTests" );
    suiteOfTests->addTest( new CppUnit::TestCaller<SvnClientTests>( 
                                   "testCheckout", 
                                   &SvnClientTests::testCheckout ) );
    return suiteOfTests;
}
