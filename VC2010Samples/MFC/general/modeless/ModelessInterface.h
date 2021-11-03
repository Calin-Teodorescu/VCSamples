
#if defined( API_MODELESS_IMPLEMENTATION )
#define API_MODELESS  __declspec( dllexport )
#elif defined( API_MODELESS_LIB_PEER )
#define API_MODELESS
#else
#define API_MODELESS __declspec( dllimport )
#endif

class API_MODELESS IModelessDialog
{

public:

    virtual ~IModelessDialog( void ) = 0;

    static std::shared_ptr< IModelessDialog > sCreateObject( void );
};
