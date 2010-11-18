/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-93040d2c716c
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

#line 924 "sip/gen/event.sip"
    #include <wx/event.h>
#line 15 "sip_corewxMoveEvent.cpp"

#line 23 "sip/gen/gdicmn.sip"
    #include <wx/gdicmn.h>
#line 19 "sip_corewxMoveEvent.cpp"
#line 386 "sip/gen/gdicmn.sip"
    #include <wx/gdicmn.h>
#line 22 "sip_corewxMoveEvent.cpp"
#line 40 "sip/gen/object.sip"
    #include <wx/object.h>
#line 25 "sip_corewxMoveEvent.cpp"
#line 129 "sip/gen/event.sip"
    #include <wx/event.h>
#line 28 "sip_corewxMoveEvent.cpp"
#line 17 "sip/gen/object.sip"
    #include <wx/object.h>
#line 31 "sip_corewxMoveEvent.cpp"
#line 84 "sip/gen/object.sip"
    #include <wx/object.h>
#line 34 "sip_corewxMoveEvent.cpp"


class sipwxMoveEvent : public wxMoveEvent
{
public:
    sipwxMoveEvent(const wxPoint&,int);
    sipwxMoveEvent(const wxMoveEvent&);
    virtual ~sipwxMoveEvent();

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
    sipwxMoveEvent(const sipwxMoveEvent &);
    sipwxMoveEvent &operator = (const sipwxMoveEvent &);

    char sipPyMethods[3];
};

sipwxMoveEvent::sipwxMoveEvent(const wxPoint& pt,int id): wxMoveEvent(pt,id), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxMoveEvent::sipwxMoveEvent(const wxMoveEvent& a0): wxMoveEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxMoveEvent::~sipwxMoveEvent()
{
    sipCommonDtor(sipPySelf);
}

wxEvent * sipwxMoveEvent::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_Clone);

    if (!sipMeth)
        return wxEvent::Clone();

    extern wxEvent * sipVH__core_1(sip_gilstate_t,PyObject *);

    return sipVH__core_1(sipGILState,sipMeth);
}

wxEventCategory sipwxMoveEvent::GetEventCategory()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_GetEventCategory);

    if (!sipMeth)
        return wxEvent::GetEventCategory();

    extern wxEventCategory sipVH__core_0(sip_gilstate_t,PyObject *);

    return sipVH__core_0(sipGILState,sipMeth);
}

wxClassInfo * sipwxMoveEvent::GetClassInfo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_GetClassInfo);

    if (!sipMeth)
        return wxObject::GetClassInfo();

    extern wxClassInfo * sipVH__core_6(sip_gilstate_t,PyObject *);

    return sipVH__core_6(sipGILState,sipMeth);
}


PyDoc_STRVAR(doc_wxMoveEvent_GetPosition, "MoveEvent.GetPosition() -> Point");

extern "C" {static PyObject *meth_wxMoveEvent_GetPosition(PyObject *, PyObject *);}
static PyObject *meth_wxMoveEvent_GetPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxMoveEvent, &sipCpp))
        {
            wxPoint *sipRes;

            try
            {
            sipRes = new wxPoint(sipCpp->GetPosition());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoveEvent, sipName_GetPosition, doc_wxMoveEvent_GetPosition);

    return NULL;
}


PyDoc_STRVAR(doc_wxMoveEvent_GetRect, "MoveEvent.GetRect() -> Rect");

extern "C" {static PyObject *meth_wxMoveEvent_GetRect(PyObject *, PyObject *);}
static PyObject *meth_wxMoveEvent_GetRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxMoveEvent, &sipCpp))
        {
            wxRect *sipRes;

            try
            {
            sipRes = new wxRect(sipCpp->GetRect());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoveEvent, sipName_GetRect, doc_wxMoveEvent_GetRect);

    return NULL;
}


PyDoc_STRVAR(doc_wxMoveEvent_SetRect, "MoveEvent.SetRect(Rect)");

extern "C" {static PyObject *meth_wxMoveEvent_SetRect(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxMoveEvent_SetRect(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const wxRect * rect;
        int rectState = 0;
        wxMoveEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_rect,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1", &sipSelf, sipType_wxMoveEvent, &sipCpp, sipType_wxRect, &rect, &rectState))
        {
            try
            {
            sipCpp->SetRect(*rect);
            }
            catch (...)
            {
            sipReleaseType(const_cast<wxRect *>(rect),sipType_wxRect,rectState);
                sipRaiseUnknownException();
                return NULL;
            }
            sipReleaseType(const_cast<wxRect *>(rect),sipType_wxRect,rectState);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoveEvent, sipName_SetRect, doc_wxMoveEvent_SetRect);

    return NULL;
}


PyDoc_STRVAR(doc_wxMoveEvent_SetPosition, "MoveEvent.SetPosition(Point)");

extern "C" {static PyObject *meth_wxMoveEvent_SetPosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxMoveEvent_SetPosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint * pos;
        int posState = 0;
        wxMoveEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1", &sipSelf, sipType_wxMoveEvent, &sipCpp, sipType_wxPoint, &pos, &posState))
        {
            try
            {
            sipCpp->SetPosition(*pos);
            }
            catch (...)
            {
            sipReleaseType(const_cast<wxPoint *>(pos),sipType_wxPoint,posState);
                sipRaiseUnknownException();
                return NULL;
            }
            sipReleaseType(const_cast<wxPoint *>(pos),sipType_wxPoint,posState);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoveEvent, sipName_SetPosition, doc_wxMoveEvent_SetPosition);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxMoveEvent(void *, const sipTypeDef *);}
static void *cast_wxMoveEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_wxMoveEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_wxEvent)->ctd_cast((wxEvent *)(wxMoveEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxMoveEvent(void *, int);}
static void release_wxMoveEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxMoveEvent *>(sipCppV);
    else
        delete reinterpret_cast<wxMoveEvent *>(sipCppV);
}


extern "C" {static void dealloc_wxMoveEvent(sipSimpleWrapper *);}
static void dealloc_wxMoveEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipwxMoveEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_wxMoveEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_wxMoveEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxMoveEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxMoveEvent *sipCpp = 0;

    {
        const wxPoint * pt;
        int ptState = 0;
        int id = 0;

        static const char *sipKwdList[] = {
            sipName_pt,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|i", sipType_wxPoint, &pt, &ptState, &id))
        {
            try
            {
            sipCpp = new sipwxMoveEvent(*pt,id);
            }
            catch (...)
            {
            sipReleaseType(const_cast<wxPoint *>(pt),sipType_wxPoint,ptState);
                sipRaiseUnknownException();
                return NULL;
            }
            sipReleaseType(const_cast<wxPoint *>(pt),sipType_wxPoint,ptState);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const wxMoveEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_wxMoveEvent, &a0))
        {
            try
            {
            sipCpp = new sipwxMoveEvent(*a0);
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
static sipEncodedTypeDef supers_wxMoveEvent[] = {{19, 255, 1}};


static PyMethodDef methods_wxMoveEvent[] = {
    {SIP_MLNAME_CAST(sipName_GetPosition), meth_wxMoveEvent_GetPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_wxMoveEvent_GetPosition)},
    {SIP_MLNAME_CAST(sipName_GetRect), meth_wxMoveEvent_GetRect, METH_VARARGS, SIP_MLDOC_CAST(doc_wxMoveEvent_GetRect)},
    {SIP_MLNAME_CAST(sipName_SetPosition), (PyCFunction)meth_wxMoveEvent_SetPosition, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxMoveEvent_SetPosition)},
    {SIP_MLNAME_CAST(sipName_SetRect), (PyCFunction)meth_wxMoveEvent_SetRect, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxMoveEvent_SetRect)}
};

sipVariableDef variables_wxMoveEvent[] = {
    {PropertyVariable, sipName_Position, &methods_wxMoveEvent[0], &methods_wxMoveEvent[2], NULL, NULL},
    {PropertyVariable, sipName_Rect, &methods_wxMoveEvent[1], &methods_wxMoveEvent[3], NULL, NULL},
};

PyDoc_STRVAR(doc_wxMoveEvent, "\1MoveEvent(Point, int id=0)\n"
    "MoveEvent(MoveEvent)");


sipClassTypeDef sipTypeDef__core_wxMoveEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxMoveEvent,
        {0}
    },
    {
        sipNameNr_MoveEvent,
        {0, 0, 1},
        4, methods_wxMoveEvent,
        0, 0,
        2, variables_wxMoveEvent,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxMoveEvent,
    -1,
    -1,
    supers_wxMoveEvent,
    0,
    init_wxMoveEvent,
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
    dealloc_wxMoveEvent,
    0,
    0,
    0,
    release_wxMoveEvent,
    cast_wxMoveEvent,
    0,
    0,
    0
};
