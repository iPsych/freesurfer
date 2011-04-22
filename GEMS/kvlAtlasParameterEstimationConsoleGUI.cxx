/**
 * @file  kvlAtlasParameterEstimationConsoleGUI.cxx
 * @brief REPLACE_WITH_ONE_LINE_SHORT_DESCRIPTION
 *
 * REPLACE_WITH_LONG_DESCRIPTION_OR_REFERENCE
 */
/*
 * Original Author: Koen Van Leemput
 * CVS Revision Info:
 *    $Author: krish $
 *    $Date: 2011/04/22 22:46:47 $
 *    $Revision: 1.1 $
 *
 * Copyright © 2011 The General Hospital Corporation (Boston, MA) "MGH"
 *
 * Terms and conditions for use, reproduction, distribution and contribution
 * are found in the 'FreeSurfer Software License Agreement' contained
 * in the file 'LICENSE' found in the FreeSurfer distribution, and here:
 *
 * https://surfer.nmr.mgh.harvard.edu/fswiki/FreeSurferSoftwareLicense
 *
 * Reporting: freesurfer@nmr.mgh.harvard.edu
 *
 */
// generated by Fast Light User Interface Designer (fluid) version 1.0110

#include "kvlAtlasParameterEstimationConsoleGUI.h"

void kvlAtlasParameterEstimationConsoleGUI::cb_m_Window_i(Fl_Double_Window*, void*)
{
  exit( 0 );
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_Window(Fl_Double_Window* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->user_data()))->cb_m_Window_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_LabelImageViewer_i(kvl::ImageViewer*, void*)
{
  //this->SelectTriangleContainingPoint( Fl::event_x(), m_LabelImageViewer->h() - Fl::event_y() );
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_LabelImageViewer(kvl::ImageViewer* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_LabelImageViewer_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_AlphaImageViewer_i(kvl::ImageViewer*, void*)
{
  //this->SelectTriangleContainingPoint( Fl::event_x(), m_AlphaImageViewer->h() - Fl::event_y() );
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_AlphaImageViewer(kvl::ImageViewer* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_AlphaImageViewer_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_LabelImageNumber_i(Fl_Choice*, void*)
{
  this->DisplayLabelImage( m_LabelImageNumber->value() );
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_LabelImageNumber(Fl_Choice* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_LabelImageNumber_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_Size0_i(Fl_Value_Input*, void*)
{
  this->InitializeMesh();
  m_NumberOfUpsamplingSteps->do_callback();
//m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_Size0(Fl_Value_Input* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_Size0_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_Size1_i(Fl_Value_Input*, void*)
{
  this->InitializeMesh();
  m_NumberOfUpsamplingSteps->do_callback();
//m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_Size1(Fl_Value_Input* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_Size1_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_Go_i(Fl_Button*, void*)
{
  this->Estimate();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_Go(Fl_Button* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_Go_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_ShowMesh_i(Fl_Check_Button*, void*)
{
  m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_ShowMesh(Fl_Check_Button* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_ShowMesh_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_LabelNumber_i(Fl_Choice*, void*)
{
  m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_LabelNumber(Fl_Choice* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_LabelNumber_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_InitialStiffness_i(Fl_Value_Input*, void*)
{
  this->InitializeMesh();
//m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_InitialStiffness(Fl_Value_Input* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_InitialStiffness_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_ShowGradient_i(Fl_Check_Button*, void*)
{
  m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_ShowGradient(Fl_Check_Button* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_ShowGradient_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_Interrupt_i(Fl_Button*, void*)
{
  this->Interrupt();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_Interrupt(Fl_Button* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_Interrupt_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_Step_i(Fl_Button*, void*)
{
  this->Step();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_Step(Fl_Button* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_Step_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_Continue_i(Fl_Button*, void*)
{
  this->Continue();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_Continue(Fl_Button* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_Continue_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_PositionEstimationResolution_i(Fl_Value_Input*, void*)
{
  this->SetPositionEstimationResolution( static_cast< unsigned int >( m_PositionEstimationResolution->value() ) );
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_PositionEstimationResolution(Fl_Value_Input* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_PositionEstimationResolution_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_NumberOfUpsamplingSteps_i(Fl_Value_Input*, void*)
{
  const int size0 = static_cast< int >( m_Size0->value() );
  const int size1 = static_cast< int >( m_Size1->value() );
  const int size2 = static_cast< int >( m_Size2->value() );
  const int numberOfUpsamplingSteps =
    static_cast< int >( m_NumberOfUpsamplingSteps->value() );
  const float finalSize0 =
    pow( 2, numberOfUpsamplingSteps ) * size0 -
    pow( 2, numberOfUpsamplingSteps ) + 1;
  const float finalSize1 =
    pow( 2, numberOfUpsamplingSteps ) * size1 -
    pow( 2, numberOfUpsamplingSteps ) + 1;
  const float finalSize2 =
    pow( 2, numberOfUpsamplingSteps ) * size2 -
    pow( 2, numberOfUpsamplingSteps ) + 1;
  m_FinalSize0->value( finalSize0 );
  m_FinalSize1->value( finalSize1 );
  m_FinalSize2->value( finalSize2 );
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_NumberOfUpsamplingSteps(Fl_Value_Input* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_NumberOfUpsamplingSteps_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_ExplicitStartCollection_i(Fl_Input*, void*)
{
  this->InitializeMesh();
  m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_ExplicitStartCollection(Fl_Input* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_ExplicitStartCollection_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_UseExplicitStartCollection_i(Fl_Check_Button*, void*)
{
  if ( m_UseExplicitStartCollection->value() )
  {
    m_ExplicitStartCollection->activate();
  }
  else
  {
    m_ExplicitStartCollection->deactivate();
  };
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_UseExplicitStartCollection(Fl_Check_Button* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_UseExplicitStartCollection_i(o,v);
}

void kvlAtlasParameterEstimationConsoleGUI::cb_m_Size2_i(Fl_Value_Input*, void*)
{
  this->InitializeMesh();
  m_NumberOfUpsamplingSteps->do_callback();
//m_LabelImageNumber->do_callback();
}
void kvlAtlasParameterEstimationConsoleGUI::cb_m_Size2(Fl_Value_Input* o, void* v)
{
  ((kvlAtlasParameterEstimationConsoleGUI*)(o->parent()->user_data()))->cb_m_Size2_i(o,v);
}

kvlAtlasParameterEstimationConsoleGUI::kvlAtlasParameterEstimationConsoleGUI()
{
  {
    m_Window = new Fl_Double_Window(1670, 1005);
    m_Window->callback((Fl_Callback*)cb_m_Window, (void*)(this));
    {
      m_LabelImageViewer = new kvl::ImageViewer(25, 29, 700, 700, "Label image");
      m_LabelImageViewer->box(FL_FLAT_BOX);
      m_LabelImageViewer->color((Fl_Color)FL_FOREGROUND_COLOR);
      m_LabelImageViewer->selection_color((Fl_Color)FL_BACKGROUND_COLOR);
      m_LabelImageViewer->labeltype(FL_NORMAL_LABEL);
      m_LabelImageViewer->labelfont(0);
      m_LabelImageViewer->labelsize(14);
      m_LabelImageViewer->labelcolor((Fl_Color)FL_FOREGROUND_COLOR);
      m_LabelImageViewer->callback((Fl_Callback*)cb_m_LabelImageViewer);
      m_LabelImageViewer->align(FL_ALIGN_TOP);
      m_LabelImageViewer->when(FL_WHEN_RELEASE);
      m_LabelImageViewer->end();
    } // kvl::ImageViewer* m_LabelImageViewer
    {
      m_AlphaImageViewer = new kvl::ImageViewer(855, 29, 700, 700, "Alphas");
      m_AlphaImageViewer->box(FL_FLAT_BOX);
      m_AlphaImageViewer->color((Fl_Color)FL_FOREGROUND_COLOR);
      m_AlphaImageViewer->selection_color((Fl_Color)FL_BACKGROUND_COLOR);
      m_AlphaImageViewer->labeltype(FL_NORMAL_LABEL);
      m_AlphaImageViewer->labelfont(0);
      m_AlphaImageViewer->labelsize(14);
      m_AlphaImageViewer->labelcolor((Fl_Color)FL_FOREGROUND_COLOR);
      m_AlphaImageViewer->callback((Fl_Callback*)cb_m_AlphaImageViewer);
      m_AlphaImageViewer->align(FL_ALIGN_TOP);
      m_AlphaImageViewer->when(FL_WHEN_RELEASE);
      m_AlphaImageViewer->end();
    } // kvl::ImageViewer* m_AlphaImageViewer
    {
      m_LabelImageNumber = new Fl_Choice(173, 751, 110, 25, "Label image number:");
      m_LabelImageNumber->down_box(FL_BORDER_BOX);
      m_LabelImageNumber->callback((Fl_Callback*)cb_m_LabelImageNumber);
    } // Fl_Choice* m_LabelImageNumber
    {
      m_Size0 = new Fl_Value_Input(160, 797, 60, 25, "Initial mesh size:");
      m_Size0->minimum(1);
      m_Size0->maximum(100);
      m_Size0->step(1);
      m_Size0->value(10);
      m_Size0->callback((Fl_Callback*)cb_m_Size0);
      m_Size0->when(FL_WHEN_RELEASE);
    } // Fl_Value_Input* m_Size0
    {
      m_Size1 = new Fl_Value_Input(233, 797, 60, 25);
      m_Size1->minimum(1);
      m_Size1->maximum(100);
      m_Size1->step(1);
      m_Size1->value(10);
      m_Size1->callback((Fl_Callback*)cb_m_Size1);
      m_Size1->when(FL_WHEN_RELEASE);
    } // Fl_Value_Input* m_Size1
    {
      Fl_Button* o = new Fl_Button(898, 810, 105, 25, "Go!");
      o->callback((Fl_Callback*)cb_Go);
    } // Fl_Button* o
    {
      m_ShowMesh = new Fl_Check_Button(658, 830, 25, 25, "Show mesh:");
      m_ShowMesh->down_box(FL_DOWN_BOX);
      m_ShowMesh->value(1);
      m_ShowMesh->callback((Fl_Callback*)cb_m_ShowMesh);
      m_ShowMesh->align(FL_ALIGN_LEFT);
    } // Fl_Check_Button* m_ShowMesh
    {
      m_ShowAlphasEstimationIterations = new Fl_Check_Button(778, 875, 25, 25, "Show alphas estimation iterations:");
      m_ShowAlphasEstimationIterations->down_box(FL_DOWN_BOX);
      m_ShowAlphasEstimationIterations->value(1);
      m_ShowAlphasEstimationIterations->align(FL_ALIGN_LEFT);
    } // Fl_Check_Button* m_ShowAlphasEstimationIterations
    {
      m_TotalProgress = new Fl_Progress(1235, 815, 255, 25, "Inactive");
    } // Fl_Progress* m_TotalProgress
    {
      m_SubProgress = new Fl_Progress(1235, 860, 255, 25);
    } // Fl_Progress* m_SubProgress
    {
      m_LabelNumber = new Fl_Choice(433, 749, 322, 26, "Label:");
      m_LabelNumber->down_box(FL_BORDER_BOX);
      m_LabelNumber->callback((Fl_Callback*)cb_m_LabelNumber);
    } // Fl_Choice* m_LabelNumber
    {
      m_InitialStiffness = new Fl_Value_Input(203, 950, 75, 25, "Initial stiffness:");
      m_InitialStiffness->maximum(1000);
      m_InitialStiffness->value(0.1);
      m_InitialStiffness->callback((Fl_Callback*)cb_m_InitialStiffness);
      m_InitialStiffness->when(FL_WHEN_RELEASE);
    } // Fl_Value_Input* m_InitialStiffness
    {
      m_ShowGradient = new Fl_Check_Button(798, 830, 25, 25, "Show gradient:");
      m_ShowGradient->down_box(FL_DOWN_BOX);
      m_ShowGradient->callback((Fl_Callback*)cb_m_ShowGradient);
      m_ShowGradient->align(FL_ALIGN_LEFT);
    } // Fl_Check_Button* m_ShowGradient
    {
      Fl_Button* o = new Fl_Button(898, 845, 105, 25, "Interrupt");
      o->callback((Fl_Callback*)cb_Interrupt);
    } // Fl_Button* o
    {
      Fl_Button* o = new Fl_Button(898, 880, 105, 25, "Step");
      o->callback((Fl_Callback*)cb_Step);
    } // Fl_Button* o
    {
      Fl_Button* o = new Fl_Button(898, 915, 105, 25, "Continue");
      o->callback((Fl_Callback*)cb_Continue);
    } // Fl_Button* o
    {
      m_PositionEstimationResolution = new Fl_Value_Input(763, 915, 60, 25, "Position estimation resolution");
      m_PositionEstimationResolution->minimum(1);
      m_PositionEstimationResolution->maximum(100);
      m_PositionEstimationResolution->step(10);
      m_PositionEstimationResolution->value(10);
      m_PositionEstimationResolution->callback((Fl_Callback*)cb_m_PositionEstimationResolution);
      m_PositionEstimationResolution->when(FL_WHEN_RELEASE);
    } // Fl_Value_Input* m_PositionEstimationResolution
    {
      m_NumberOfUpsamplingSteps = new Fl_Value_Input(233, 836, 60, 25, "Number of upsampling steps:");
      m_NumberOfUpsamplingSteps->maximum(10);
      m_NumberOfUpsamplingSteps->step(1);
      m_NumberOfUpsamplingSteps->callback((Fl_Callback*)cb_m_NumberOfUpsamplingSteps);
      m_NumberOfUpsamplingSteps->when(FL_WHEN_RELEASE);
    } // Fl_Value_Input* m_NumberOfUpsamplingSteps
    {
      m_FinalSize0 = new Fl_Value_Output(161, 875, 60, 25, "Final inital mesh size:");
    } // Fl_Value_Output* m_FinalSize0
    {
      m_FinalSize1 = new Fl_Value_Output(233, 875, 60, 25);
    } // Fl_Value_Output* m_FinalSize1
    {
      m_ExplicitStartCollection = new Fl_Input(825, 764, 235, 25, "Explicit start collection:");
      m_ExplicitStartCollection->callback((Fl_Callback*)cb_m_ExplicitStartCollection);
      m_ExplicitStartCollection->align(FL_ALIGN_TOP);
      m_ExplicitStartCollection->deactivate();
    } // Fl_Input* m_ExplicitStartCollection
    {
      m_UseExplicitStartCollection = new Fl_Check_Button(795, 764, 25, 25);
      m_UseExplicitStartCollection->down_box(FL_DOWN_BOX);
      m_UseExplicitStartCollection->callback((Fl_Callback*)cb_m_UseExplicitStartCollection);
      m_UseExplicitStartCollection->align(FL_ALIGN_LEFT);
    } // Fl_Check_Button* m_UseExplicitStartCollection
    {
      m_Size2 = new Fl_Value_Input(303, 797, 60, 25);
      m_Size2->minimum(1);
      m_Size2->maximum(100);
      m_Size2->step(1);
      m_Size2->value(10);
      m_Size2->callback((Fl_Callback*)cb_m_Size2);
      m_Size2->when(FL_WHEN_RELEASE);
    } // Fl_Value_Input* m_Size2
    {
      m_FinalSize2 = new Fl_Value_Output(303, 875, 60, 25);
    } // Fl_Value_Output* m_FinalSize2
    m_Window->end();
  } // Fl_Double_Window* m_Window
}

kvlAtlasParameterEstimationConsoleGUI::~kvlAtlasParameterEstimationConsoleGUI()
{
}

void kvlAtlasParameterEstimationConsoleGUI::DisplayLabelImage( unsigned int labelImageNumber )
{
}

void kvlAtlasParameterEstimationConsoleGUI::InitializeMesh()
{
}

void kvlAtlasParameterEstimationConsoleGUI::Estimate()
{
}

void kvlAtlasParameterEstimationConsoleGUI::SelectTriangleContainingPoint( float, float )
{
}

void kvlAtlasParameterEstimationConsoleGUI::Interrupt()
{
}

void kvlAtlasParameterEstimationConsoleGUI::Step()
{
}

void kvlAtlasParameterEstimationConsoleGUI::Continue()
{
}

void kvlAtlasParameterEstimationConsoleGUI::SetPositionEstimationResolution( unsigned int )
{
}
