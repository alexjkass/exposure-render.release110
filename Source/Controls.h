#pragma once

#include <QtGui>

class QColorPushButton : public QPushButton
{
	Q_OBJECT

public:
	QColorPushButton(QWidget* pParent = NULL);

	virtual QSize sizeHint() const;
	virtual void paintEvent(QPaintEvent* pPaintEvent);
	virtual void mousePressEvent(QMouseEvent* pEvent);

	int		GetMargin(void) const;
	void	SetMargin(const int& Margin);
	int		GetRadius(void) const;
	void	SetRadius(const int& Radius);
	QColor	GetColor(void) const;
	void	SetColor(const QColor& Color);

	private slots:
		void	OnCurrentColorChanged(const QColor& Color);

signals:
		void currentColorChanged(const QColor&);

private:
	int		m_Margin;
	int		m_Radius;
	QColor	m_Color;
};

class QFloatSlider : public QSlider
{
    Q_OBJECT

public:
    QFloatSlider(QWidget* pParent = NULL);
	
	float GetValue(void) const;
	void SetValue(const float& Value);
	void SetValueAnimated(const float& Value);

private slots:

private:
	float	m_Factor;
	float	m_Value;
};

class QDoubleSpinner : public QDoubleSpinBox
{
	Q_OBJECT

public:

	QDoubleSpinner(QWidget* pParent = NULL){};

	virtual QSize sizeHint() const;

	virtual QString textFromValue(int Value) const;

private slots:

private:
};

QString GetOpenFileName(const QString& Caption, const QString& Filter);
QString GetSaveFileName(const QString& Caption, const QString& Filter);