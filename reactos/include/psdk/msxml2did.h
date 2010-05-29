/*
 * Copyright (C) 2005 Vijay Kiran Kamuju
 * Copyright (C) 2008 Alistair Leslie-Hughes
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __MSXML2DID_H__
#define __MSXML2DID_H__

#define DISPID_DOM_BASE                     0x00000001
#define DISPID_DOM_COLLECTION_BASE          0x000f4240
#define DISPID_DOM_COLLECTION_MAX           0x002dc6bf

#define DISPID_DOM_NODE                                 0x00000001
#define DISPID_DOM_NODE_NODENAME                        0x00000002
#define DISPID_DOM_NODE_NODEVALUE                       0x00000003
#define DISPID_DOM_NODE_NODETYPE                        0x00000004
#define DISPID_DOM_NODE_NODETYPEENUM                    0x00000005
#define DISPID_DOM_NODE_PARENTNODE                      0x00000006
#define DISPID_DOM_NODE_CHILDNODES                      0x00000007
#define DISPID_DOM_NODE_FIRSTCHILD                      0x00000008
#define DISPID_DOM_NODE_LASTCHILD                       0x00000009
#define DISPID_DOM_NODE_PREVIOUSSIBLING                 0x0000000a
#define DISPID_DOM_NODE_NEXTSIBLING                     0x0000000b
#define DISPID_DOM_NODE_ATTRIBUTES                      0x0000000c
#define DISPID_DOM_NODE_INSERTBEFORE                    0x0000000d
#define DISPID_DOM_NODE_REPLACECHILD                    0x0000000e
#define DISPID_DOM_NODE_REMOVECHILD                     0x0000000f
#define DISPID_DOM_NODE_APPENDCHILD                     0x00000010
#define DISPID_DOM_NODE_HASCHILDNODES                   0x00000011
#define DISPID_DOM_NODE_OWNERDOC                        0x00000012
#define DISPID_DOM_NODE_CLONENODE                       0x00000013

#define DISPID_XMLDOM_NODE                              0x00000014
#define DISPID_XMLDOM_NODE_STRINGTYPE                   0x00000015
#define DISPID_XMLDOM_NODE_SPECIFIED                    0x00000016
#define DISPID_XMLDOM_NODE_DEFINITION                   0x00000017
#define DISPID_XMLDOM_NODE_TEXT                         0x00000018
#define DISPID_XMLDOM_NODE_NODETYPEDVALUE               0x00000019
#define DISPID_XMLDOM_NODE_DATATYPE                     0x0000001a
#define DISPID_XMLDOM_NODE_XML                          0x0000001b
#define DISPID_XMLDOM_NODE_TRANSFORMNODE                0x0000001c
#define DISPID_XMLDOM_NODE_SELECTNODES                  0x0000001d
#define DISPID_XMLDOM_NODE_SELECTSINGLENODE             0x0000001e
#define DISPID_XMLDOM_NODE_PARSED                       0x0000001f
#define DISPID_XMLDOM_NODE_NAMESPACE                    0x00000020
#define DISPID_XMLDOM_NODE_PREFIX                       0x00000021
#define DISPID_XMLDOM_NODE_BASENAME                     0x00000022
#define DISPID_XMLDOM_NODE_TRANSFORMNODETOOBJECT        0x00000023
#define DISPID_XMLDOM_NODE__TOP                         0x00000024

#define DISPID_DOM_DOCUMENT                             0x00000025
#define DISPID_DOM_DOCUMENT_DOCTYPE                     0x00000026
#define DISPID_DOM_DOCUMENT_IMPLEMENTATION              0x00000027
#define DISPID_DOM_DOCUMENT_DOCUMENTELEMENT             0x00000028
#define DISPID_DOM_DOCUMENT_CREATEELEMENT               0x00000029
#define DISPID_DOM_DOCUMENT_CREATEDOCUMENTFRAGMENT      0x0000002a
#define DISPID_DOM_DOCUMENT_CREATETEXTNODE              0x0000002b
#define DISPID_DOM_DOCUMENT_CREATECOMMENT               0x0000002c
#define DISPID_DOM_DOCUMENT_CREATECDATASECTION          0x0000002d
#define DISPID_DOM_DOCUMENT_CREATEPROCESSINGINSTRUCTION 0x0000002e
#define DISPID_DOM_DOCUMENT_CREATEATTRIBUTE             0x0000002f
#define DISPID_DOM_DOCUMENT_CREATEENTITY                0x00000030
#define DISPID_DOM_DOCUMENT_CREATEENTITYREFERENCE       0x00000031
#define DISPID_DOM_DOCUMENT_GETELEMENTSBYTAGNAME        0x00000032
#define DISPID_DOM_DOCUMENT_TOP                         0x00000033

#define DISPID_XMLDOM_DOCUMENT                          0x00000034
#define DISPID_XMLDOM_DOCUMENT_DOCUMENTNODE             0x00000035
#define DISPID_XMLDOM_DOCUMENT_CREATENODE               0x00000036
#define DISPID_XMLDOM_DOCUMENT_CREATENODEEX             0x00000037
#define DISPID_XMLDOM_DOCUMENT_NODEFROMID               0x00000038
#define DISPID_XMLDOM_DOCUMENT_DOCUMENTNAMESPACES       0x00000039
#define DISPID_XMLDOM_DOCUMENT_LOAD                     0x0000003a
#define DISPID_XMLDOM_DOCUMENT_PARSEERROR               0x0000003b
#define DISPID_XMLDOM_DOCUMENT_URL                      0x0000003c
#define DISPID_XMLDOM_DOCUMENT_ASYNC                    0x0000003d
#define DISPID_XMLDOM_DOCUMENT_ABORT                    0x0000003e
#define DISPID_XMLDOM_DOCUMENT_LOADXML                  0x0000003f
#define DISPID_XMLDOM_DOCUMENT_SAVE                     0x00000040
#define DISPID_XMLDOM_DOCUMENT_VALIDATE                 0x00000041
#define DISPID_XMLDOM_DOCUMENT_RESOLVENAMESPACE         0x00000042
#define DISPID_XMLDOM_DOCUMENT_PRESERVEWHITESPACE       0x00000043
#define DISPID_XMLDOM_DOCUMENT_ONREADYSTATECHANGE       0x00000044
#define DISPID_XMLDOM_DOCUMENT_ONDATAAVAILABLE          0x00000045
#define DISPID_XMLDOM_DOCUMENT_ONTRANSFORMNODE          0x00000046
#define DISPID_XMLDOM_DOCUMENT__TOP                     0x00000047

#define DISPID_DOM_NODELIST                             0x00000048
#define DISPID_DOM_NODELIST_ITEM                        0x00000049
#define DISPID_DOM_NODELIST_LENGTH                      0x0000004a
#define DISPID_XMLDOM_NODELIST                          0x0000004b
#define DISPID_XMLDOM_NODELIST_NEXTNODE                 0x0000004c
#define DISPID_XMLDOM_NODELIST_RESET                    0x0000004d
#define DISPID_XMLDOM_NODELIST_NEWENUM                  0x0000004e
#define DISPID_XMLDOM_NODELIST__TOP                     0x0000004f

#define DISPID_DOM_NAMEDNODEMAP                         0x00000050
#define DISPID_DOM_NAMEDNODEMAP_GETNAMEDITEM            0x00000053
#define DISPID_DOM_NAMEDNODEMAP_SETNAMEDITEM            0x00000054
#define DISPID_DOM_NAMEDNODEMAP_REMOVENAMEDITEM         0x00000055
#define DISPID_XMLDOM_NAMEDNODEMAP                      0x00000056
#define DISPID_XMLDOM_NAMEDNODEMAP_GETQUALIFIEDITEM     0x00000057
#define DISPID_XMLDOM_NAMEDNODEMAP_REMOVEQUALIFIEDITEM  0x00000058
#define DISPID_XMLDOM_NAMEDNODEMAP_NEXTNODE             0x00000059
#define DISPID_XMLDOM_NAMEDNODEMAP_RESET                0x0000005a
#define DISPID_XMLDOM_NAMEDNODEMAP_NEWENUM              0x0000005b
#define DISPID_XMLDOM_NAMEDNODEMAP__TOP                 0x0000005c

#define DISPID_DOM_W3CWRAPPERS                          0x0000005d

#define DISPID_DOM_DOCUMENTFRAGMENT                     0x0000005e
#define DISPID_DOM_DOCUMENTFRAGMENT__TOP                0x0000005f

#define DISPID_DOM_ELEMENT                              0x00000060
#define DISPID_DOM_ELEMENT_GETTAGNAME                   0x00000061
#define DISPID_DOM_ELEMENT_GETATTRIBUTES                0x00000062
#define DISPID_DOM_ELEMENT_GETATTRIBUTE                 0x00000063
#define DISPID_DOM_ELEMENT_SETATTRIBUTE                 0x00000064
#define DISPID_DOM_ELEMENT_REMOVEATTRIBUTE              0x00000065
#define DISPID_DOM_ELEMENT_GETATTRIBUTENODE             0x00000066
#define DISPID_DOM_ELEMENT_SETATTRIBUTENODE             0x00000067
#define DISPID_DOM_ELEMENT_REMOVEATTRIBUTENODE          0x00000068
#define DISPID_DOM_ELEMENT_GETELEMENTSBYTAGNAME         0x00000069
#define DISPID_DOM_ELEMENT_NORMALIZE                    0x0000006a
#define DISPID_DOM_ELEMENT__TOP                         0x0000006b

#define DISPID_DOM_DATA                0x0000006c
#define DISPID_DOM_DATA_DATA           0x0000006d
#define DISPID_DOM_DATA_LENGTH         0x0000006e
#define DISPID_DOM_DATA_SUBSTRING      0x0000006f
#define DISPID_DOM_DATA_APPEND         0x00000070
#define DISPID_DOM_DATA_INSERT         0x00000071
#define DISPID_DOM_DATA_DELETE         0x00000072
#define DISPID_DOM_DATA_REPLACE        0x00000073
#define DISPID_DOM_DATA__TOP           0x00000074

#define DISPID_DOM_ATTRIBUTE           0x00000075
#define DISPID_DOM_ATTRIBUTE_GETNAME   0x00000076
#define DISPID_DOM_ATTRIBUTE_SPECIFIED 0x00000077
#define DISPID_DOM_ATTRIBUTE_VALUE     0x00000078
#define DISPID_DOM_ATTRIBUTE__TOP      0x00000079

#define DISPID_DOM_TEXT                0x0000007a
#define DISPID_DOM_TEXT_SPLITTEXT      0x0000007b
#define DISPID_DOM_TEXT_JOINTEXT       0x0000007c
#define DISPID_DOM_TEXT__TOP           0x0000007d

#define DISPID_DOM_PI                  0x0000007e
#define DISPID_DOM_PI_TARGET           0x0000007f
#define DISPID_DOM_PI_DATA             0x00000080
#define DISPID_DOM_PI__TOP             0x00000081

#define DISPID_DOM_DOCUMENTTYPE                    0x00000082
#define DISPID_DOM_DOCUMENTTYPE_NAME               0x00000083
#define DISPID_DOM_DOCUMENTTYPE_ENTITIES           0x00000084
#define DISPID_DOM_DOCUMENTTYPE_NOTATIONS          0x00000085
#define DISPID_DOM_DOCUMENTTYPE__TOP               0x00000086

#define DISPID_DOM_NOTATION            0x00000087
#define DISPID_DOM_NOTATION_PUBLICID   0x00000088
#define DISPID_DOM_NOTATION_SYSTEMID   0x00000089
#define DISPID_DOM_NOTATION__TOP       0x0000008a

#define DISPID_DOM_ENTITY              0x0000008b
#define DISPID_DOM_ENTITY_PUBLICID     0x0000008c
#define DISPID_DOM_ENTITY_SYSTEMID     0x0000008d
#define DISPID_DOM_ENTITY_NOTATIONNAME 0x0000008e
#define DISPID_DOM_ENTITY__TOP         0x0000008f

#define DISPID_DOM_W3CWRAPPERS_TOP     0x0000008f

#define DISPID_DOM_IMPLEMENTATION              0x00000090
#define DISPID_DOM_IMPLEMENTATION_HASFEATURE   0x00000091
#define DISPID_DOM_IMPLEMENTATION__TOP         0x00000092

#define DISPID_DOM__TOP                0x000000af

#define  DISPID_DOM_ERROR              0x000000b0
#define  DISPID_DOM_ERROR_ERRORCODE    0x000000b1
#define  DISPID_DOM_ERROR_URL          0x000000b2
#define  DISPID_DOM_ERROR_REASON       0x000000b3
#define  DISPID_DOM_ERROR_SRCTEXT      0x000000b4
#define  DISPID_DOM_ERROR_LINE         0x000000b5
#define  DISPID_DOM_ERROR_LINEPOS      0x000000b6
#define  DISPID_DOM_ERROR_FILEPOS      0x000000b7
#define  DISPID_DOM_ERROR__TOP         0x000000b8

#define  DISPID_XTLRUNTIME                     0x000000b9
#define  DISPID_XTLRUNTIME_UNIQUEID            0x000000ba
#define  DISPID_XTLRUNTIME_DEPTH               0x000000bb
#define  DISPID_XTLRUNTIME_CHILDNUMBER         0x000000bc
#define  DISPID_XTLRUNTIME_ANCESTORCHILDNUMBER 0x000000bd
#define  DISPID_XTLRUNTIME_ABSOLUTECHILDNUMBER 0x000000be
#define  DISPID_XTLRUNTIME_FORMATINDEX         0x000000bf
#define  DISPID_XTLRUNTIME_FORMATNUMBER        0x000000c0
#define  DISPID_XTLRUNTIME_FORMATDATE          0x000000c1
#define  DISPID_XTLRUNTIME_FORMATTIME          0x000000c2
#define  DISPID_XTLRUNTIME__TOP                0x000000c3

#define  DISPID_XMLDOMEVENT                    0x000000c4
#define  DISPID_XMLDOMEVENT_ONREADYSTATECHANGE DISPID_READYSTATECHANGE
#define  DISPID_XMLDOMEVENT_ONDATAAVAILABLE    0x000000c5
#define  DISPID_XMLDOMEVENT__TOP               0x000000c6

#define DISPID_XMLDOM_DOCUMENT2                0x000000c7
#define DISPID_XMLDOM_DOCUMENT2_NAMESPACES     0x000000c8
#define DISPID_XMLDOM_DOCUMENT2_SCHEMAS        0x000000c9
#define DISPID_XMLDOM_DOCUMENT2_VALIDATE       0x000000ca
#define DISPID_XMLDOM_DOCUMENT2_SETPROPERTY    0x000000cb
#define DISPID_XMLDOM_DOCUMENT2_GETPROPERTY    0x000000cc
#define DISPID_XMLDOM_DOCUMENT2__TOP           0x000000cd

#define DISPID_XMLDOM_SCHEMACOLLECTION                 0x00000002
#define DISPID_XMLDOM_SCHEMACOLLECTION_ADD             0x00000003
#define DISPID_XMLDOM_SCHEMACOLLECTION_GET             0x00000004
#define DISPID_XMLDOM_SCHEMACOLLECTION_REMOVE          0x00000005
#define DISPID_XMLDOM_SCHEMACOLLECTION_LENGTH          0x00000006
#define DISPID_XMLDOM_SCHEMACOLLECTION_NAMESPACEURI    0x00000007
#define DISPID_XMLDOM_SCHEMACOLLECTION_ADDCOLLECTION   0x00000008
#define DISPID_XMLDOM_SCHEMACOLLECTION__TOP            0x00000009

#define DISPID_XMLDOM_SELECTION                0x0000000a
#define DISPID_XMLDOM_SELECTION_EXPR           0x0000000b
#define DISPID_XMLDOM_SELECTION_CONTEXT        0x0000000c
#define DISPID_XMLDOM_SELECTION_PEEKNODE       0x0000000d
#define DISPID_XMLDOM_SELECTION_MATCHES        0x0000000e
#define DISPID_XMLDOM_SELECTION_REMOVENEXT     0x0000000f
#define DISPID_XMLDOM_SELECTION_REMOVEALL      0x00000010
#define DISPID_XMLDOM_SELECTION_CLONE          0x00000011
#define DISPID_XMLDOM_SELECTION_GETPROPERTY    0x00000012
#define DISPID_XMLDOM_SELECTION_SETPROPERTY    0x00000013
#define DISPID_XMLDOM_SELECTION__TOP           0x00000014

#define DISPID_XMLDOM_TEMPLATE                 0x00000001
#define DISPID_XMLDOM_TEMPLATE_STYLESHEET      0x00000002
#define DISPID_XMLDOM_TEMPLATE_CREATEPROCESSOR 0x00000003
#define DISPID_XMLDOM_TEMPLATE__TOP            0x00000004

#define DISPID_XMLDOM_PROCESSOR                0x00000001
#define DISPID_XMLDOM_PROCESSOR_INPUT          0x00000002
#define DISPID_XMLDOM_PROCESSOR_XSLTEMPLATE    0x00000003
#define DISPID_XMLDOM_PROCESSOR_SETSTARTMODE   0x00000004
#define DISPID_XMLDOM_PROCESSOR_STARTMODE      0x00000005
#define DISPID_XMLDOM_PROCESSOR_STARTMODEURI   0x00000006
#define DISPID_XMLDOM_PROCESSOR_OUTPUT         0x00000007
#define DISPID_XMLDOM_PROCESSOR_TRANSFORM      0x00000008
#define DISPID_XMLDOM_PROCESSOR_RESET          0x00000009
#define DISPID_XMLDOM_PROCESSOR_READYSTATE     0x0000000a
#define DISPID_XMLDOM_PROCESSOR_ADDPARAMETER   0x0000000b
#define DISPID_XMLDOM_PROCESSOR_ADDOBJECT      0x0000000c
#define DISPID_XMLDOM_PROCESSOR_STYLESHEET     0x0000000d
#define DISPID_XMLDOM_PROCESSOR__TOP           0x0000000e

#define  DISPID_XMLDSO                         0x10000
#define  DISPID_XMLDSO_DOCUMENT                0x10001
#define  DISPID_XMLDSO_JAVADSOCOMPATIBLE       0x10002

/* SAX Defines */
#define DISPID_SAX_XMLREADER__MIN              0x00000501
#define DISPID_SAX_XMLREADER__MAX              0x00010000
#define DISPID_SAX_XMLREADER__BASE             DISPID_SAX_XMLREADER__MIN

#define DISPID_SAX_XMLREADER                   0x00000501
#define DISPID_SAX_XMLREADER_GETFEATURE        0x00000502
#define DISPID_SAX_XMLREADER_PUTFEATURE        0x00000503
#define DISPID_SAX_XMLREADER_GETPROPERTY       0x00000504
#define DISPID_SAX_XMLREADER_PUTPROPERTY       0x00000505
#define DISPID_SAX_XMLREADER_ENTITYRESOLVER    0x00000506
#define DISPID_SAX_XMLREADER_CONTENTHANDLER    0x00000507
#define DISPID_SAX_XMLREADER_DTDHANDLER        0x00000508
#define DISPID_SAX_XMLREADER_ERRORHANDLER      0x00000509
#define DISPID_SAX_XMLREADER_BASEURL           0x0000050A
#define DISPID_SAX_XMLREADER_SECUREBASEURL     0x0000050B
#define DISPID_SAX_XMLREADER_PARSE             0x0000050C
#define DISPID_SAX_XMLREADER_PARSEURL          0x0000050D
#define DISPID_SAX_XMLREADER_PARENT            0x0000050E

#define DISPID_SAX_XMLFILTER                   0x00000510
#define DISPID_SAX_XMLFILTER_GETFEATURE        0x00000511
#define DISPID_SAX_XMLFILTER_PUTFEATURE        0x00000512
#define DISPID_SAX_XMLFILTER_GETPROPERTY       0x00000513
#define DISPID_SAX_XMLFILTER_PUTPROPERTY       0x00000514
#define DISPID_SAX_XMLFILTER_ENTITYRESOLVER    0x00000515
#define DISPID_SAX_XMLFILTER_CONTENTHANDLER    0x00000516
#define DISPID_SAX_XMLFILTER_DTDHANDLER        0x00000517
#define DISPID_SAX_XMLFILTER_ERRORHANDLER      0x00000518
#define DISPID_SAX_XMLFILTER_BASEURL           0x00000519
#define DISPID_SAX_XMLFILTER_SECUREBASEURL     0x0000051A
#define DISPID_SAX_XMLFILTER_PARSE             0x0000051B
#define DISPID_SAX_XMLFILTER_PARSEURL          0x0000051C
#define DISPID_SAX_XMLFILTER_PARENT            0x0000051D

#define DISPID_SAX_LOCATOR                     0x00000520
#define DISPID_SAX_LOCATOR_COLUMNNUMBER        0x00000521
#define DISPID_SAX_LOCATOR_LINENUMBER          0x00000522
#define DISPID_SAX_LOCATOR_PUBLICID            0x00000523
#define DISPID_SAX_LOCATOR_SYSTEMID            0x00000524

#define DISPID_SAX_ENTITYRESOLVER                       0x00000526
#define DISPID_SAX_ENTITYRESOLVER_RESOLVEENTITY         0x00000527

#define DISPID_SAX_CONTENTHANDLER                       0x00000529
#define DISPID_SAX_CONTENTHANDLER_DOCUMENTLOCATOR       0x0000052A
#define DISPID_SAX_CONTENTHANDLER_STARTDOCUMENT         0x0000052B
#define DISPID_SAX_CONTENTHANDLER_ENDDOCUMENT           0x0000052C
#define DISPID_SAX_CONTENTHANDLER_STARTPREFIXMAPPING    0x0000052D
#define DISPID_SAX_CONTENTHANDLER_ENDPREFIXMAPPING      0x0000052E
#define DISPID_SAX_CONTENTHANDLER_STARTELEMENT          0x0000052F
#define DISPID_SAX_CONTENTHANDLER_ENDELEMENT            0x00000530
#define DISPID_SAX_CONTENTHANDLER_CHARACTERS            0x00000531
#define DISPID_SAX_CONTENTHANDLER_IGNORABLEWHITESPACE   0x00000532
#define DISPID_SAX_CONTENTHANDLER_PROCESSINGINSTRUCTION 0x00000533
#define DISPID_SAX_CONTENTHANDLER_SKIPPEDENTITY         0x00000534

#define DISPID_SAX_DTDHANDLER                           0x00000536
#define DISPID_SAX_DTDHANDLER_NOTATIONDECL              0x00000537
#define DISPID_SAX_DTDHANDLER_UNPARSEDENTITYDECL        0x00000538

#define DISPID_SAX_ERRORHANDLER                         0x0000053A
#define DISPID_SAX_ERRORHANDLER_ERROR                   0x0000053B
#define DISPID_SAX_ERRORHANDLER_FATALERROR              0x0000053C
#define DISPID_SAX_ERRORHANDLER_IGNORABLEWARNING        0x0000053D

#define DISPID_SAX_ATTRIBUTES                           0x0000053F
#define DISPID_SAX_ATTRIBUTES_LENGTH                    0x00000540
#define DISPID_SAX_ATTRIBUTES_GETURI                    0x00000541
#define DISPID_SAX_ATTRIBUTES_GETLOCALNAME              0x00000542
#define DISPID_SAX_ATTRIBUTES_GETQNAME                  0x00000543
#define DISPID_SAX_ATTRIBUTES_GETINDEXFROMNAME          0x00000544
#define DISPID_SAX_ATTRIBUTES_GETINDEXFROMQNAME         0x00000545
#define DISPID_SAX_ATTRIBUTES_GETTYPE                   0x00000546
#define DISPID_SAX_ATTRIBUTES_GETTYPEFROMNAME           0x00000547
#define DISPID_SAX_ATTRIBUTES_GETTYPEFROMQNAME          0x00000548
#define DISPID_SAX_ATTRIBUTES_GETVALUE                  0x00000549
#define DISPID_SAX_ATTRIBUTES_GETVALUEFROMNAME          0x0000054A
#define DISPID_SAX_ATTRIBUTES_GETVALUEFROMQNAME         0x0000054B

#define DISPID_SAX_LEXICALHANDLER                       0x0000054D
#define DISPID_SAX_LEXICALHANDLER_STARTDTD              0x0000054E
#define DISPID_SAX_LEXICALHANDLER_ENDDTD                0x0000054F
#define DISPID_SAX_LEXICALHANDLER_STARTENTITY           0x00000550
#define DISPID_SAX_LEXICALHANDLER_ENDENTITY             0x00000551
#define DISPID_SAX_LEXICALHANDLER_STARTCDATA            0x00000552
#define DISPID_SAX_LEXICALHANDLER_ENDCDATA              0x00000553
#define DISPID_SAX_LEXICALHANDLER_COMMENT               0x00000554

#define DISPID_SAX_DECLHANDLER                          0x00000556
#define DISPID_SAX_DECLHANDLER_ELEMENTDECL              0x00000557
#define DISPID_SAX_DECLHANDLER_ATTRIBUTEDECL            0x00000558
#define DISPID_SAX_DECLHANDLER_INTERNALENTITYDECL       0x00000559
#define DISPID_SAX_DECLHANDLER_EXTERNALENTITYDECL       0x0000055A

#define DISPID_MX_ATTRIBUTES_ADDATTRIBUTE               0x0000055D
#define DISPID_MX_ATTRIBUTES_CLEAR                      0x0000055E
#define DISPID_MX_ATTRIBUTES_REMOVEATTRIBUTE            0x0000055F
#define DISPID_MX_ATTRIBUTES_SETATTRIBUTE               0x00000560
#define DISPID_MX_ATTRIBUTES_SETATTRIBUTES              0x00000561
#define DISPID_MX_ATTRIBUTES_SETLOCALNAME               0x00000562
#define DISPID_MX_ATTRIBUTES_SETQNAME                   0x00000563
#define DISPID_MX_ATTRIBUTES_SETTYPE                    0x00000564
#define DISPID_MX_ATTRIBUTES_SETURI                     0x00000565
#define DISPID_MX_ATTRIBUTES_SETVALUE                   0x00000566
#define DISPID_MX_ATTRIBUTES_ADDATTRIBUTEFROMINDEX      0x00000567

#define DISPID_MX_WRITER                                0x00000568
#define DISPID_MX_WRITER_OUTPUT                         0x00000569
#define DISPID_MX_WRITER_DESTINATION                    0x0000056A
#define DISPID_MX_WRITER_ENCODING                       0x0000056B
#define DISPID_MX_WRITER_BYTEORDERMARK                  0x0000056C
#define DISPID_MX_WRITER_INDENT                         0x0000056D
#define DISPID_MX_WRITER_STANDALONE                     0x0000056E
#define DISPID_MX_WRITER_OMITXMLDECLARATION             0x0000056F
#define DISPID_MX_WRITER_VERSION                        0x00000570
#define DISPID_MX_WRITER_DISABLEOUTPUTESCAPING          0x00000571
#define DISPID_MX_WRITER_FLUSH                          0x00000572
#define DISPID_MX_WRITER_RESET                          0x00000573

#define DISPID_MX_READER_CONTROL                        0x00000575
#define DISPID_MX_READER_CONTROL_ABORT                  0x00000576
#define DISPID_MX_READER_CONTROL_RESUME                 0x00000577
#define DISPID_MX_READER_CONTROL_SUSPEND                0x00000578

#define DISPID_MX_SCHEMADECLHANDLER                     0x0000057a
#define DISPID_MX_SCHEMADECLHANDLER_SCHEMAELEMENTDECL   0x0000057b

#define DISPID_MX_NSMGR                                 0x0000057d
#define DISPID_MX_NSMGR_ALLOWOVERRIDE                   0x0000057e
#define DISPID_MX_NSMGR_RESET                           0x0000057f
#define DISPID_MX_NSMGR_PUSHCONTEXT                     0x00000580
#define DISPID_MX_NSMGR_PUSHNODECONTEXT                 0x00000581
#define DISPID_MX_NSMGR_POPCONTEXT                      0x00000582
#define DISPID_MX_NSMGR_DECLAREPREFIX                   0x00000583
#define DISPID_MX_NSMGR_GETDECLAREDPREFIXES             0x00000584
#define DISPID_MX_NSMGR_GETPREFIXES                     0x00000585
#define DISPID_MX_NSMGR_GETURI                          0x00000586
#define DISPID_MX_NSMGR_GETURIFROMNODE                  0x00000587
#define DISPID_MX_NSMGR_LENGTH                          0x00000588

#define DISPID_SOM_VALIDATE                             0x0000058b
#define DISPID_SOM_VALIDATEONLOAD                       0x0000058c
#define DISPID_SOM_GETSCHEMA                            0x0000058d
#define DISPID_SOM_GETDECLARATION                       0x0000058e
#define DISPID_SOM_ITEMBYNAME                           0x0000058f
#define DISPID_SOM_ITEMBYQNAME                          0x00000590
#define DISPID_SOM_ANYATTRIBUTE                         0x00000591
#define DISPID_SOM_ATTRIBUTEGROUPS                      0x00000592
#define DISPID_SOM_ATTRIBUTES                           0x00000593
#define DISPID_SOM_BASETYPES                            0x00000594
#define DISPID_SOM_CONTENTMODEL                         0x00000595
#define DISPID_SOM_CONTENTTYPE                          0x00000596
#define DISPID_SOM_DEFAULTVALUE                         0x00000597
#define DISPID_SOM_DERIVEDBY                            0x00000598
#define DISPID_SOM_DISALLOWED                           0x00000599
#define DISPID_SOM_ELEMENTS                             0x0000059a
#define DISPID_SOM_ENUMERATION                          0x0000059b
#define DISPID_SOM_FIELDS                               0x0000059c
#define DISPID_SOM_FINAL                                0x0000059d
#define DISPID_SOM_FIXEDVALUE                           0x0000059e
#define DISPID_SOM_FRACTIONDIGITS                       0x0000059f
#define DISPID_SOM_ID                                   0x000005a0
#define DISPID_SOM_IDCONSTRAINTS                        0x000005a1
#define DISPID_SOM_ISABSTRACT                           0x000005a2
#define DISPID_SOM_ISNILLABLE                           0x000005a3
#define DISPID_SOM_ISREFERENCE                          0x000005a4
#define DISPID_SOM_ISVALID                              0x000005a5
#define DISPID_SOM_ITEMTYPE                             0x000005a6
#define DISPID_SOM_LENGTH                               0x000005a7
#define DISPID_SOM_MAXEXCLUSIVE                         0x000005a8
#define DISPID_SOM_MAXINCLUSIVE                         0x000005a9
#define DISPID_SOM_MAXLENGTH                            0x000005aa
#define DISPID_SOM_MAXOCCURS                            0x000005ab
#define DISPID_SOM_MINEXCLUSIVE                         0x000005ac
#define DISPID_SOM_MININCLUSIVE                         0x000005ad
#define DISPID_SOM_MINLENGTH                            0x000005ae
#define DISPID_SOM_MINOCCURS                            0x000005af
#define DISPID_SOM_MODELGROUPS                          0x000005b0
#define DISPID_SOM_NAME                                 0x000005b1
#define DISPID_SOM_NAMESPACES                           0x000005b2
#define DISPID_SOM_NAMESPACEURI                         0x000005b3
#define DISPID_SOM_NOTATIONS                            0x000005b4
#define DISPID_SOM_PARTICLES                            0x000005b5
#define DISPID_SOM_PATTERNS                             0x000005b6
#define DISPID_SOM_PROCESSCONTENTS                      0x000005b7
#define DISPID_SOM_PROHIBITED                           0x000005b8
#define DISPID_SOM_PUBLICIDENTIFIER                     0x000005b9
#define DISPID_SOM_REFERENCEDKEY                        0x000005ba
#define DISPID_SOM_SCHEMA                               0x000005bb
#define DISPID_SOM_SCHEMALOCATIONS                      0x000005bc
#define DISPID_SOM_SCOPE                                0x000005bd
#define DISPID_SOM_SELECTOR                             0x000005be
#define DISPID_SOM_SUBSTITUTIONGROUP                    0x000005bf
#define DISPID_SOM_EXCLUSIONS                           0x000005c0
#define DISPID_SOM_SYSTEMIDENTIFIER                     0x000005c1
#define DISPID_SOM_TARGETNAMESPACE                      0x000005c2
#define DISPID_SOM_TOTALDIGITS                          0x000005c3
#define DISPID_SOM_TYPE                                 0x000005c4
#define DISPID_SOM_TYPES                                0x000005c5
#define DISPID_SOM_UNHANDLEDATTRS                       0x000005c6
#define DISPID_SOM_USE                                  0x000005c7
#define DISPID_SOM_VARIETY                              0x000005c8
#define DISPID_SOM_VERSION                              0x000005c9
#define DISPID_SOM_WHITESPACE                           0x000005ca
#define DISPID_SOM_WRITEANNOTATION                      0x000005cb


#endif /* __MSXML2DID_H__ */
