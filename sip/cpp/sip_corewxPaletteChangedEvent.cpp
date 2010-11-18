/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-93040d2c716c
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

#line 1062 "sip/gen/event.sip"
    #include <wx/event.h>
#line 15 "sip_corewxPaletteChangedEvent.cpp"

#line 40 "sip/gen/object.sip"
    #include <wx/object.h>
#line 19 "sip_corewxPaletteChangedEvent.cpp"
#line 129 "sip/gen/event.sip"
    #include <wx/event.h>
#line 22 "sip_corewxPaletteChangedEvent.cpp"
#line 17 "sip/gen/object.sip"
    #include <wx/object.h>
#line 25 "sip_corewxPaletteChangedEvent.cpp"
#line 84 "sip/gen/object.sip"
    #include <wx/object.h>
#line 28 "sip_corewxPaletteChangedEvent.cpp"


class sipwxPaletteChangedEvent : public wxPaletteChangedEvent
{
public:
    sipwxPaletteChangedEvent(wxWindowID);
    sipwxPaletteChangedEvent(const wxPaletteChangedEvent&);
    virtual ~sipwxPaletteChangedEvent();

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
    sipwxPaletteChangedEvent(const sipwxPaletteChangedEvent &);
    sipwxPaletteChangedEvent &operator = (const sipwxPaletteChangedEvent &);

    char sipPyMethods[3];
};

sipwxPaletteChangedEvent::sipwxPaletteChangedEvent(wxWindowID winid): wxPaletteChangedEvent(winid), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPaletteChangedEvent::sipwxPaletteChangedEvent(const wxPaletteChangedEvent& a0): wxPaletteChangedEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPaletteChangedEvent::~sipwxPaletteChangedEvent()
{
    sipCommonDtor(sipPySelf);
}

wxEvent * sipwxPaletteChangedEvent::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_Clone);

    if (!sipMeth)
        return wxEvent::Clone();

    extern wxEvent * sipVH__core_1(sip_gilstate_t,PyObject *);

    return sipVH__core_1(sipGILState,sipMeth);
}

wxEventCategory sipwxPaletteChangedEvent::GetEventCategory()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_GetEventCategory);

    if (!sipMeth)
        return wxEvent::GetEventCategory();

    extern wxEventCategory sipVH__core_0(sip_gilstate_t,PyObject *);

    return sipVH__core_0(sipGILState,sipMeth);
}

wxClassInfo * sipwxPaletteChangedEvent::GetClassInfo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_GetClassInfo);

    if (!sipMeth)
        return wxObject::GetClassInfo();

    extern wxClassInfo * sipVH__core_6(sip_gilstate_t,PyObject *);

    return sipVH__core_6(sipGILState,sipMeth);
}


PyDoc_STRVAR(doc_wxPaletteChangedEvent_SetChangedWindow, "PaletteChangedEvent.SetChangedWindow(Window)");

extern "C" {static PyObject *meth_wxPaletteChangedEvent_SetChangedWindow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPaletteChangedEvent_SetChangedWindow(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        wxWindow * win;
        wxPaletteChangedEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_win,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8", &sipSelf, sipType_wxPaletteChangedEvent, &sipCpp, sipType_wxWindow, &win))
        {
            try
            {
            sipCpp->SetChangedWindow(win);
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
    sipNoMethod(sipParseErr, sipName_PaletteChangedEvent, sipName_SetChangedWindow, doc_wxPaletteChangedEvent_SetChangedWindow);

    return NULL;
}


PyDoc_STRVAR(doc_wxPaletteChangedEvent_GetChangedWindow, "PaletteChangedEvent.GetChangedWindow() -> Window");

extern "C" {static PyObject *meth_wxPaletteChangedEvent_GetChangedWindow(PyObject *, PyObject *);}
static PyObject *meth_wxPaletteChangedEvent_GetChangedWindow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxPaletteChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPaletteChangedEvent, &sipCpp))
        {
            wxWindow *sipRes;

            try
            {
            sipRes = sipCpp->GetChangedWindow();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromType(sipRes,sipType_wxWindow,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PaletteChangedEvent, sipName_GetChangedWindow, doc_wxPaletteChangedEvent_GetChangedWindow);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxPaletteChangedEvent(void *, const sipTypeDef *);}
static void *cast_wxPaletteChangedEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_wxPaletteChangedEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_wxEvent)->ctd_cast((wxEvent *)(wxPaletteChangedEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPaletteChangedEvent(void *, int);}
static void release_wxPaletteChangedEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPaletteChangedEvent *>(sipCppV);
    else
        delete reinterpret_cast<wxPaletteChangedEvent *>(sipCppV);
}


extern "C" {static void dealloc_wxPaletteChangedEvent(sipSimpleWrapper *);}
static void dealloc_wxPaletteChangedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipwxPaletteChangedEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_wxPaletteChangedEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_wxPaletteChangedEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxPaletteChangedEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPaletteChangedEvent *sipCpp = 0;

    {
        wxWindowID winid = 0;

        static const char *sipKwdList[] = {
            sipName_winid,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|i", &winid))
        {
            try
            {
            sipCpp = new sipwxPaletteChangedEvent(winid);
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
        const wxPaletteChangedEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_wxPaletteChangedEvent, &a0))
        {
            try
            {
            sipCpp = new sipwxPaletteChangedEvent(*a0);
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
static sipEncodedTypeDef supers_wxPaletteChangedEvent[] = {{19, 255, 1}};


static PyMethodDef methods_wxPaletteChangedEvent[] = {
    {SIP_MLNAME_CAST(sipName_GetChangedWindow), meth_wxPaletteChangedEvent_GetChangedWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPaletteChangedEvent_GetChangedWindow)},
    {SIP_MLNAME_CAST(sipName_SetChangedWindow), (PyCFunction)meth_wxPaletteChangedEvent_SetChangedWindow, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPaletteChangedEvent_SetChangedWindow)}
};

sipVariableDef variables_wxPaletteChangedEvent[] = {
    {PropertyVariable, sipName_ChangedWindow, &methods_wxPaletteChangedEvent[0], &methods_wxPaletteChangedEvent[1], NULL, NULL},
};

PyDoc_STRVAR(doc_wxPaletteChangedEvent, "\1PaletteChangedEvent(int winid=0)\n"
    "PaletteChangedEvent(PaletteChangedEvent)");


sipClassTypeDef sipTypeDef__core_wxPaletteChangedEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxPaletteChangedEvent,
        {0}
    },
    {
        sipNameNr_PaletteChangedEvent,
        {0, 0, 1},
        2, methods_wxPaletteChangedEvent,
        0, 0,
        1, variables_wxPaletteChangedEvent,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxPaletteChangedEvent,
    -1,
    -1,
    supers_wxPaletteChangedEvent,
    0,
    init_wxPaletteChangedEvent,
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
    dealloc_wxPaletteChangedEvent,
    0,
    0,
    0,
    release_wxPaletteChangedEvent,
    cast_wxPaletteChangedEvent,
    0,
    0,
    0
};
