﻿/*
 * (c) Copyright Ascensio System SIA 2010-2017
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#include "../../../raster/JBig2/source/LeptonLib/adaptmap.cpp"
#include "../../../raster/JBig2/source/LeptonLib/affine.cpp"
#include "../../../raster/JBig2/source/LeptonLib/affinecompose.cpp"
#include "../../../raster/JBig2/source/LeptonLib/arithlow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/arrayaccess.cpp"
#include "../../../raster/JBig2/source/LeptonLib/bardecode.cpp"
#include "../../../raster/JBig2/source/LeptonLib/baseline.cpp"
#include "../../../raster/JBig2/source/LeptonLib/bbuffer.cpp"
#include "../../../raster/JBig2/source/LeptonLib/bilinear.cpp"
#include "../../../raster/JBig2/source/LeptonLib/binarize.cpp"
#include "../../../raster/JBig2/source/LeptonLib/binexpand.cpp"
#include "../../../raster/JBig2/source/LeptonLib/binexpandlow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/binreduce.cpp"
#include "../../../raster/JBig2/source/LeptonLib/binreducelow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/bmf.cpp"
#include "../../../raster/JBig2/source/LeptonLib/bmpio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/bmpiostub.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/boxbasic.cpp"
#include "../../../raster/JBig2/source/LeptonLib/boxfunc1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/boxfunc2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/boxfunc3.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/ccbord.cpp"
#include "../../../raster/JBig2/source/LeptonLib/ccthin.cpp"
#include "../../../raster/JBig2/source/LeptonLib/classapp.cpp"
#include "../../../raster/JBig2/source/LeptonLib/colorcontent.cpp"
#include "../../../raster/JBig2/source/LeptonLib/colormap.cpp"
#include "../../../raster/JBig2/source/LeptonLib/colormorph.cpp"
#include "../../../raster/JBig2/source/LeptonLib/colorquant1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/colorquant2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/colorseg.cpp"
#include "../../../raster/JBig2/source/LeptonLib/compare.cpp"
#include "../../../raster/JBig2/source/LeptonLib/conncomp.cpp"
#include "../../../raster/JBig2/source/LeptonLib/convertfiles.cpp"
#include "../../../raster/JBig2/source/LeptonLib/convolve.cpp"
#include "../../../raster/JBig2/source/LeptonLib/convolvelow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/correlscore.cpp"
#include "../../../raster/JBig2/source/LeptonLib/dewarp.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/dwacomb.2.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/dwacomblow.2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/edge.cpp"
#include "../../../raster/JBig2/source/LeptonLib/enhance.cpp"
#include "../../../raster/JBig2/source/LeptonLib/fhmtauto.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/fhmtgen.1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/fhmtgenlow.1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/finditalic.cpp"
#include "../../../raster/JBig2/source/LeptonLib/flipdetect.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/fliphmtgen.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/fmorphauto.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/fmorphgen.1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/fmorphgenlow.1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/fpix1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/fpix2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/freetype.cpp"
#include "../../../raster/JBig2/source/LeptonLib/gifio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/gifiostub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/gplot.cpp"
#include "../../../raster/JBig2/source/LeptonLib/graphics1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/graymorph.cpp"
#include "../../../raster/JBig2/source/LeptonLib/graymorphlow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/grayquant.cpp"
#include "../../../raster/JBig2/source/LeptonLib/grayquantlow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/heap.cpp"
#include "../../../raster/JBig2/source/LeptonLib/jbclass.cpp"
#include "../../../raster/JBig2/source/LeptonLib/jpegio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/jpegiostub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/kernel.cpp"
#include "../../../raster/JBig2/source/LeptonLib/list.cpp"
#include "../../../raster/JBig2/source/LeptonLib/maze.cpp"
#include "../../../raster/JBig2/source/LeptonLib/morph.cpp"
#include "../../../raster/JBig2/source/LeptonLib/morphapp.cpp"
#include "../../../raster/JBig2/source/LeptonLib/morphdwa.cpp"
#include "../../../raster/JBig2/source/LeptonLib/morphseq.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/numabasic.cpp"
#include "../../../raster/JBig2/source/LeptonLib/numafunc1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/numafunc2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pageseg.cpp"
#include "../../../raster/JBig2/source/LeptonLib/paintcmap.cpp"
#include "../../../raster/JBig2/source/LeptonLib/parseprotos.cpp"
#include "../../../raster/JBig2/source/LeptonLib/partition.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pix1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pix2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pix3.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pix4.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/pix5.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/pixabasic.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pixacc.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/pixafunc1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pixafunc2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pixalloc.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pixarith.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/pixcomp.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pixconv.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pixtiling.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pngio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pngiostub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pnmio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/pnmiostub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/projective.cpp"
#include "../../../raster/JBig2/source/LeptonLib/psio1.cpp"
#include "../../../raster/JBig2/source/LeptonLib/psio1stub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/psio2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/psio2stub.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/ptabasic.cpp"
#include "../../../raster/JBig2/source/LeptonLib/ptafunc1.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/ptra.cpp"
#include "../../../raster/JBig2/source/LeptonLib/queue.cpp"
#include "../../../raster/JBig2/source/LeptonLib/rank.cpp"
#include "../../../raster/JBig2/source/LeptonLib/readbarcode.cpp"
#include "../../../raster/JBig2/source/LeptonLib/readfile.cpp"
#include "../../../raster/JBig2/source/LeptonLib/regutils.cpp"
#include "../../../raster/JBig2/source/LeptonLib/rop.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/ropiplow.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/roplow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/rotate.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/rotateam.cpp"
#include "../../../raster/JBig2/source/LeptonLib/rotateamlow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/rotateorth.cpp"
#include "../../../raster/JBig2/source/LeptonLib/rotateorthlow.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/rotateshear.cpp"
#include "../../../raster/JBig2/source/LeptonLib/runlength.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/sarray.cpp"
#include "../../../raster/JBig2/source/LeptonLib/scale.cpp"
#include "../../../raster/JBig2/source/LeptonLib/scalelow.cpp"
#include "../../../raster/JBig2/source/LeptonLib/seedfill.cpp"
#include "../../../raster/JBig2/source/LeptonLib/seedfilllow.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/sel1.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/sel2.cpp"
#include "../../../raster/JBig2/source/LeptonLib/selgen.cpp"
#include "../../../raster/JBig2/source/LeptonLib/shear.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/skew.cpp"
#include "../../../raster/JBig2/source/LeptonLib/spixio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/stack.cpp"
#include "../../../raster/JBig2/source/LeptonLib/sudoku.cpp"
#include "../../../raster/JBig2/source/LeptonLib/textops.cpp"
#include "../../../raster/JBig2/source/LeptonLib/tiffio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/tiffiostub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/lepton_utils.cpp"
//#include "../../../raster/JBig2/source/LeptonLib/viewfiles.cpp"
#include "../../../raster/JBig2/source/LeptonLib/warper.cpp"
#include "../../../raster/JBig2/source/LeptonLib/watershed.cpp"
#include "../../../raster/JBig2/source/LeptonLib/webpio.cpp"
#include "../../../raster/JBig2/source/LeptonLib/webpiostub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/writefile.cpp"
#include "../../../raster/JBig2/source/LeptonLib/zlibmem.cpp"
#include "../../../raster/JBig2/source/LeptonLib/zlibmemstub.cpp"
#include "../../../raster/JBig2/source/LeptonLib/blend1.cpp"
