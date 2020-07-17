

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Sun Jun 11 15:58:14 2006
 */
/* Compiler settings for .\AWStitch.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __AWStitchidl_h__
#define __AWStitchidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DAWStitch_FWD_DEFINED__
#define ___DAWStitch_FWD_DEFINED__
typedef interface _DAWStitch _DAWStitch;
#endif 	/* ___DAWStitch_FWD_DEFINED__ */


#ifndef ___DAWStitchEvents_FWD_DEFINED__
#define ___DAWStitchEvents_FWD_DEFINED__
typedef interface _DAWStitchEvents _DAWStitchEvents;
#endif 	/* ___DAWStitchEvents_FWD_DEFINED__ */


#ifndef __AWStitch_FWD_DEFINED__
#define __AWStitch_FWD_DEFINED__

#ifdef __cplusplus
typedef class AWStitch AWStitch;
#else
typedef struct AWStitch AWStitch;
#endif /* __cplusplus */

#endif 	/* __AWStitch_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __AWStitchLib_LIBRARY_DEFINED__
#define __AWStitchLib_LIBRARY_DEFINED__

/* library AWStitchLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_AWStitchLib;

#ifndef ___DAWStitch_DISPINTERFACE_DEFINED__
#define ___DAWStitch_DISPINTERFACE_DEFINED__

/* dispinterface _DAWStitch */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DAWStitch;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("367AED58-E27E-4577-BDF1-397AAEFC4258")
    _DAWStitch : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DAWStitchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DAWStitch * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DAWStitch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DAWStitch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DAWStitch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DAWStitch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DAWStitch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DAWStitch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DAWStitchVtbl;

    interface _DAWStitch
    {
        CONST_VTBL struct _DAWStitchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DAWStitch_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DAWStitch_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DAWStitch_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DAWStitch_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DAWStitch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DAWStitch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DAWStitch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DAWStitch_DISPINTERFACE_DEFINED__ */


#ifndef ___DAWStitchEvents_DISPINTERFACE_DEFINED__
#define ___DAWStitchEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DAWStitchEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DAWStitchEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("56FFF953-61F1-425B-8194-0D1F1E0CDA7A")
    _DAWStitchEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DAWStitchEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DAWStitchEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DAWStitchEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DAWStitchEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DAWStitchEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DAWStitchEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DAWStitchEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DAWStitchEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DAWStitchEventsVtbl;

    interface _DAWStitchEvents
    {
        CONST_VTBL struct _DAWStitchEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DAWStitchEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DAWStitchEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DAWStitchEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DAWStitchEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DAWStitchEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DAWStitchEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DAWStitchEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DAWStitchEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AWStitch;

#ifdef __cplusplus

class DECLSPEC_UUID("244E50DB-B294-410F-A43C-572F702B49CA")
AWStitch;
#endif
#endif /* __AWStitchLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


