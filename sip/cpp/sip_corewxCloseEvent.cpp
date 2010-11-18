/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-93040d2c716c
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

#line 345 "sip/gen/event.sip"
    #include <wx/event.h>
#line 15 "sip_corewxCloseEvent.cpp"

#line 40 "sip/gen/object.sip"
    #include <wx/object.h>
#line 19 "sip_corewxCloseEvent.cpp"
#line 129 "sip/gen/event.sip"
    #include <wx/event.h>
#line 22 "sip_corewxCloseEvent.cpp"
#line 17 "sip/gen/object.sip"
    #include <wx/object.h>
#line 25 "sip_corewxCloseEvent.cpp"
#line 84 "sip/gen/object.sip"
    #include <wx/object.h>
#line 28 "sip_corewxCloseEvent.cpp"


class sipwxCloseEvent : public wxCloseEvent
{
public:
    sipwxCloseEvent(wxEventType,int);
    sipwxCloseEvent(const wxCloseEvent&);
    virtual ~sipwxCloseEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    wxEvent * Clone();
    wxEventCategory GetEventCategory();
    wxClassInfo * GetClassInfo();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxCloseEvent(const sipwxCloseEvent &);
    sipwxCloseEvent &operator = (const sipwxCloseEvent &);

    char sipPyMethods[3];
};

sipwxCloseEvent::sipwxCloseEvent(wxEventType commandEventType,int id): wxCloseEvent(commandEventType,id), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCloseEvent::sipwxCloseEvent(const wxCloseEvent& a0): wxCloseEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCloseEvent::~sipwxCloseEvent()
{
    sipCommonDtor(sipPySelf);
}

wxEvent * sipwxCloseEvent::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_Clone);

    if (!sipMeth)
        return wxEvent::Clone();

    extern wxEvent * sipVH__core_1(sip_gilstate_t,PyObject *);

    return sipVH__core_1(sipGILState,sipMeth);
}

wxEventCategory sipwxCloseEvent::GetEventCategory()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_GetEventCategory);

    if (!sipMeth)
        return wxEvent::GetEventCategory();

    extern wxEventCategory sipVH__core_0(sip_gilstate_t,PyObject *);

    return sipVH__core_0(sipGILState,sipMeth);
}

wxClassInfo * sipwxCloseEvent::GetClassInfo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_GetClassInfo);

    if (!sipMeth)
        return wxObject::GetClassInfo();

    extern wxClassInfo * sipVH__core_6(sip_gilstate_t,PyObject *);

    return sipVH__core_6(sipGILState,sipMeth);
}


PyDoc_STRVAR(doc_wxCloseEvent_CanVeto, "CloseEvent.CanVeto() -> bool");

extern "C" {static PyObject *meth_wxCloseEvent_CanVeto(PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_CanVeto(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxCloseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCloseEvent, &sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->CanVeto();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_CanVeto, doc_wxCloseEvent_CanVeto);

    return NULL;
}


PyDoc_STRVAR(doc_wxCloseEvent_GetLoggingOff, "CloseEvent.GetLoggingOff() -> bool");

extern "C" {static PyObject *meth_wxCloseEvent_GetLoggingOff(PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_GetLoggingOff(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxCloseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCloseEvent, &sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->GetLoggingOff();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_GetLoggingOff, doc_wxCloseEvent_GetLoggingOff);

    return NULL;
}


PyDoc_STRVAR(doc_wxCloseEvent_SetCanVeto, "CloseEvent.SetCanVeto(bool)");

extern "C" {static PyObject *meth_wxCloseEvent_SetCanVeto(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_SetCanVeto(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool canVeto;
        wxCloseEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_canVeto,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bb", &sipSelf, sipType_wxCloseEvent, &sipCpp, &canVeto))
        {
            try
            {
            sipCpp->SetCanVeto(canVeto);
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
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_SetCanVeto, doc_wxCloseEvent_SetCanVeto);

    return NULL;
}


PyDoc_STRVAR(doc_wxCloseEvent_SetLoggingOff, "CloseEvent.SetLoggingOff(bool)");

extern "C" {static PyObject *meth_wxCloseEvent_SetLoggingOff(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_SetLoggingOff(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool loggingOff;
        wxCloseEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_loggingOff,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bb", &sipSelf, sipType_wxCloseEvent, &sipCpp, &loggingOff))
        {
            try
            {
            sipCpp->SetLoggingOff(loggingOff);
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
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_SetLoggingOff, doc_wxCloseEvent_SetLoggingOff);

    return NULL;
}


PyDoc_STRVAR(doc_wxCloseEvent_Veto, "CloseEvent.Veto(bool veto=True)");

extern "C" {static PyObject *meth_wxCloseEvent_Veto(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_Veto(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool veto = 1;
        wxCloseEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_veto,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|b", &sipSelf, sipType_wxCloseEvent, &sipCpp, &veto))
        {
            try
            {
            sipCpp->Veto(veto);
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
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_Veto, doc_wxCloseEvent_Veto);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxCloseEvent(void *, const sipTypeDef *);}
static void *cast_wxCloseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_wxCloseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_wxEvent)->ctd_cast((wxEvent *)(wxCloseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxCloseEvent(void *, int);}
static void release_wxCloseEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxCloseEvent *>(sipCppV);
    else
        delete reinterpret_cast<wxCloseEvent *>(sipCppV);
}


extern "C" {static void dealloc_wxCloseEvent(sipSimpleWrapper *);}
static void dealloc_wxCloseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipwxCloseEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_wxCloseEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_wxCloseEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxCloseEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxCloseEvent *sipCpp = 0;

    {
        wxEventType commandEventType = wxEVT_NULL;
        int id = 0;

        static const char *sipKwdList[] = {
            sipName_commandEventType,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandEventType, &id))
        {
            try
            {
            sipCpp = new sipwxCloseEvent(commandEventType,id);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const wxCloseEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_wxCloseEvent, &a0))
        {
            try
            {
            sipCpp = new sipwxCloseEvent(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxCloseEvent[] = {{19, 255, 1}};


static PyMethodDef methods_wxCloseEvent[] = {
    {SIP_MLNAME_CAST(sipName_CanVeto), meth_wxCloseEvent_CanVeto, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCloseEvent_CanVeto)},
    {SIP_MLNAME_CAST(sipName_GetLoggingOff), meth_wxCloseEvent_GetLoggingOff, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCloseEvent_GetLoggingOff)},
    {SIP_MLNAME_CAST(sipName_SetCanVeto), (PyCFunction)meth_wxCloseEvent_SetCanVeto, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCloseEvent_SetCanVeto)},
    {SIP_MLNAME_CAST(sipName_SetLoggingOff), (PyCFunction)meth_wxCloseEvent_SetLoggingOff, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCloseEvent_SetLoggingOff)},
    {SIP_MLNAME_CAST(sipName_Veto), (PyCFunction)meth_wxCloseEvent_Veto, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCloseEvent_Veto)}
};

PyDoc_STRVAR(doc_wxCloseEvent, "\1CloseEvent(int commandEventType=wxEVT_NULL, int id=0)\n"
    "CloseEvent(CloseEvent)");


sipClassTypeDef sipTypeDef__core_wxCloseEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxCloseEvent,
        {0}
    },
    {
        sipNameNr_CloseEvent,
        {0, 0, 1},
        5, methods_wxCloseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxCloseEvent,
    -1,
    -1,
    supers_wxCloseEvent,
    0,
    init_wxCloseEvent,
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
    dealloc_wxCloseEvent,
    0,
    0,
    0,
    release_wxCloseEvent,
    cast_wxCloseEvent,
    0,
    0,
    0
};
