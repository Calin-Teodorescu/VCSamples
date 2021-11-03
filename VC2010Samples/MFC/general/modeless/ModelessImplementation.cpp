#include "stdafx.h"

#define API_MODELESS_IMPLEMENTATION

#include "ModelessImplementation.h"

IModelessDialog::~IModelessDialog( void )
{
}

CModelessDialog::CModelessDialog( void )
{
}

CModelessDialog::~CModelessDialog( void )
{
}

std::shared_ptr< IModelessDialog > IModelessDialog::sCreateObject( void )
{
    return std::make_shared< CModelessDialog >( CModelessDialog( ) );
}
