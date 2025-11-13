#pragma once
namespace Lab10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(611, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Створити чергу цілих чисел. Знайти найбільший елемент черги.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть розмір черги";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(228, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(406, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 68);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Додати елементи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(406, 222);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 68);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Видалити елементи";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(285, 439);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 79);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Найбільший елемент черги";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(87, 174);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(254, 244);
			this->listBox1->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(561, 120);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(478, 277);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 530);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1; // Оголошення черги
		int lastAddedValue;
		bool isQueueInitialized = false; // ініціалізацію черги
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isQueueInitialized)
		{
			isQueueInitialized = true;
		}
		int size = Convert::ToInt32(textBox1->Text);
		Random^ rand = gcnew Random();
		if (myQueue1.Count < size)
		{
			int inputValue = rand->Next(0, 100);

			myQueue1.Enqueue(inputValue);
			listBox1->Items->Add(inputValue.ToString());
			lastAddedValue = inputValue;
		}
		else
		{
			MessageBox::Show("Досягнуто ліміт чисел", "Повідомлення", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1)
			{
				listBox1->Items->Add(value.ToString());
			}
		}
		else
		{
			MessageBox::Show("Черга порожня", "Повідомлення", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			int maxValue = Int32::MinValue;

			for each (int value in myQueue1)
			{
				if (value > maxValue)
					maxValue = value;
			}
			MessageBox::Show("Найбільший елемент черги: " + maxValue.ToString(),
				"Результат",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
}
};
}
