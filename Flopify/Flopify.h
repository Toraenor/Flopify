#pragma once
#include "SoundManager.h"

namespace Flopify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Flopify
	/// </summary>
	public ref class Flopify : public System::Windows::Forms::Form
	{
	public:
		Flopify(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Flopify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;



	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ Play;
	private: System::Windows::Forms::Button^ Pause;
	private: System::Windows::Forms::Button^ Stop;
	private: System::Collections::Generic::List<String^>^ musicNames;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;







	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Play = (gcnew System::Windows::Forms::Button());
			this->Pause = (gcnew System::Windows::Forms::Button());
			this->Stop = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1190, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->addToolStripMenuItem, this->saveToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::openToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::addToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Flopify::saveToolStripMenuItem_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(644, 27);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(521, 426);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->Play);
			this->flowLayoutPanel2->Controls->Add(this->Pause);
			this->flowLayoutPanel2->Controls->Add(this->Stop);
			this->flowLayoutPanel2->Location = System::Drawing::Point(264, 419);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(3);
			this->flowLayoutPanel2->Size = System::Drawing::Size(255, 34);
			this->flowLayoutPanel2->TabIndex = 5;
			// 
			// Play
			// 
			this->Play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Play->Location = System::Drawing::Point(6, 6);
			this->Play->Name = L"Play";
			this->Play->Size = System::Drawing::Size(75, 23);
			this->Play->TabIndex = 0;
			this->Play->Text = L"Play";
			this->Play->UseVisualStyleBackColor = true;
			this->Play->Click += gcnew System::EventHandler(this, &Flopify::Play_Click);
			// 
			// Pause
			// 
			this->Pause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pause->Location = System::Drawing::Point(87, 6);
			this->Pause->Name = L"Pause";
			this->Pause->Size = System::Drawing::Size(75, 23);
			this->Pause->TabIndex = 1;
			this->Pause->Text = L"Pause";
			this->Pause->UseVisualStyleBackColor = true;
			this->Pause->Click += gcnew System::EventHandler(this, &Flopify::Pause_Click);
			// 
			// Stop
			// 
			this->Stop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stop->Location = System::Drawing::Point(168, 6);
			this->Stop->Name = L"Stop";
			this->Stop->Size = System::Drawing::Size(75, 23);
			this->Stop->TabIndex = 2;
			this->Stop->Text = L"Stop";
			this->Stop->UseVisualStyleBackColor = true;
			this->Stop->Click += gcnew System::EventHandler(this, &Flopify::Stop_Click);
			// 
			// Flopify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1190, 465);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Flopify";
			this->Text = L"Flopify";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SoundManager::Get().Play("collar.wav");
	}
	private: System::Void Pause_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Create an OpenFileDialog instance
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		// Configure the dialog to filter for .wav files
		openFileDialog->Filter = "WAV files (*.wav)|*.wav|All files (*.*)|*.*";
		openFileDialog->Title = "Select a WAV File";

		// Show the dialog and check if the user selected a file
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Get the selected file path
			String^ filePath = openFileDialog->FileName;
			String^ fileName = System::IO::Path::GetFileName(filePath);
			musicNames->Add(fileName);

			// Display the file path (example usage)
			MessageBox::Show("Selected WAV file: " + filePath);

			CreateMusic(fileName);
		}
	}

	private: void CreateMusic(System::String^ fileName)
	{
		FlowLayoutPanel^ testLayout = gcnew FlowLayoutPanel();
		Label^ label = gcnew Label();
		PictureBox^ pic = gcnew PictureBox();

		pic->Image = Image::FromFile("images.jfif");
		label->Text = fileName;

		testLayout->Name = fileName;
		testLayout->Anchor = AnchorStyles::None;
		testLayout->BackColor = Color::White;
		testLayout->AutoSize = true;

		testLayout->Controls->Add(pic);
		testLayout->Controls->Add(label);

		// Attach the same MouseDown event to the FlowLayoutPanel and its child controls
		testLayout->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusickOnClick);
		pic->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusickOnClick);
		label->MouseDown += gcnew MouseEventHandler(this, &Flopify::MusickOnClick);

		flowLayoutPanel1->Controls->Add(testLayout);
	}

	private: System::Void MusickOnClick(System::Object^ sender, MouseEventArgs^ e)
	{
		FlowLayoutPanel^ clickedPanel = nullptr;

		// Check if the sender is a FlowLayoutPanel or a child control
		if (dynamic_cast<FlowLayoutPanel^>(sender) != nullptr)
		{
			// The sender is the FlowLayoutPanel itself
			clickedPanel = dynamic_cast<FlowLayoutPanel^>(sender);
		}
		else if (dynamic_cast<Control^>(sender) != nullptr)
		{
			// The sender is a child control, get its parent
			Control^ childControl = dynamic_cast<Control^>(sender);
			clickedPanel = dynamic_cast<FlowLayoutPanel^>(childControl->Parent);
		}

		if (clickedPanel != nullptr)
		{
			// Perform actions with the clicked FlowLayoutPanel
			MessageBox::Show("Clicked FlowLayoutPanel: " + clickedPanel->Name);
			clickedPanel->Select();

			// You can now use the filePath to play or process the .wav file
// Example: Load the .wav file using System::Media::SoundPlayer
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer(System::IO::Path::GetFullPath(clickedPanel->Name));
			try
			{
				player->Play(); // Play the .wav file asynchronously
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error playing file: " + ex->Message);
			}
		}
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Create an OpenFileDialog instance
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		// Configure the dialog to filter for .wav files
		openFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		openFileDialog->Title = "Select a TXT File";

		// Show the dialog and check if the user selected a file
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(openFileDialog->FileName);
			while (!reader->EndOfStream)
			{
				musicNames->Add(reader->ReadLine());
			}
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//// Create an OpenFileDialog instance
		//OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		//// Configure the dialog to filter for .wav files
		//openFileDialog->Filter = "TXT Files (*.txt)|*.txt";
		//openFileDialog->Title = "Select a TXT File";

		//// Show the dialog and check if the user selected a file
		//if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		//{
		//	System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(openFileDialog->FileName);
		//	while (!reader->EndOfStream)
		//	{
		//		musicNames->Add(reader->ReadLine());
		//	}
		//}
	}
	};
}
