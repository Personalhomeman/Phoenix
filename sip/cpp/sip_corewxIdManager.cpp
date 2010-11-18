/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-93040d2c716c
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

#line 17 "sip/gen/windowid.sip"
    #include <wx/windowid.h>
#line 15 "sip_corewxIdManager.cpp"



PyDoc_STRVAR(doc_wxIdManager_ReserveId, "IdManager.ReserveId(int count=1) -> int");

extern "C" {static PyObject *meth_wxIdManager_ReserveId(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxIdManager_ReserveId(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int count = 1;

        static const char *sipKwdList[] = {
            sipName_count,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|i", &count))
        {
            wxWindowID sipRes;

            try
            {
            sipRes = wxIdManager::ReserveId(count);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IdManager, sipName_ReserveId, doc_wxIdManager_ReserveId);

    return NULL;
}


PyDoc_STRVAR(doc_wxIdManager_UnreserveId, "IdManager.UnreserveId(int, int count=1)");

extern "C" {static PyObject *meth_wxIdManager_UnreserveId(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxIdManager_UnreserveId(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        wxWindowID id;
        int count = 1;

        static const char *sipKwdList[] = {
            sipName_id,
            sipName_count,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "i|i", &id, &count))
        {
            try
            {
            wxIdManager::UnreserveId(id,count);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IdManager, sipName_UnreserveId, doc_wxIdManager_UnreserveId);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxIdManager(void *, const sipTypeDef *);}
static void *cast_wxIdManager(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_wxIdManager)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxIdManager(void *, int);}
static void release_wxIdManager(void *sipCppV,int)
{
    delete reinterpret_cast<wxIdManager *>(sipCppV);
}


extern "C" {static void assign_wxIdManager(void *, SIP_SSIZE_T, const void *);}
static void assign_wxIdManager(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<wxIdManager *>(sipDst)[sipDstIdx] = *reinterpret_cast<const wxIdManager *>(sipSrc);
}


extern "C" {static void *array_wxIdManager(SIP_SSIZE_T);}
static void *array_wxIdManager(SIP_SSIZE_T sipNrElem)
{
    return new wxIdManager[sipNrElem];
}


extern "C" {static void *copy_wxIdManager(const void *, SIP_SSIZE_T);}
static void *copy_wxIdManager(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new wxIdManager(reinterpret_cast<const wxIdManager *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxIdManager(sipSimpleWrapper *);}
static void dealloc_wxIdManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_wxIdManager(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_wxIdManager(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxIdManager(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    wxIdManager *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            try
            {
            sipCpp = new wxIdManager();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipCpp;
        }
    }

    {
        const wxIdManager * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_wxIdManager, &a0))
        {
            try
            {
            sipCpp = new wxIdManager(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_wxIdManager[] = {
    {SIP_MLNAME_CAST(sipName_ReserveId), (PyCFunction)meth_wxIdManager_ReserveId, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxIdManager_ReserveId)},
    {SIP_MLNAME_CAST(sipName_UnreserveId), (PyCFunction)meth_wxIdManager_UnreserveId, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxIdManager_UnreserveId)}
};

PyDoc_STRVAR(doc_wxIdManager, "\1IdManager()\n"
    "IdManager(IdManager)");


sipClassTypeDef sipTypeDef__core_wxIdManager = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxIdManager,
        {0}
    },
    {
        sipNameNr_IdManager,
        {0, 0, 1},
        2, methods_wxIdManager,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxIdManager,
    -1,
    -1,
    0,
    0,
    init_wxIdManager,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_wxIdManager,
    assign_wxIdManager,
    array_wxIdManager,
    copy_wxIdManager,
    release_wxIdManager,
    cast_wxIdManager,
    0,
    0,
    0
};
