#include "qqcell.h"

QQCell::QQCell()
{
    isOpen = false;
}

void QQCell::SetSubtitle(const QString &text)
{
    if (text.isEmpty()) return;
    subTitle = text;
}

void QQCell::SetIconPath(const QString &path)//头像路径
{
    if (path.isEmpty()) return;
    iconPath = path;
}

void QQCell::SetStatus(const quint8 &val)//状态
{
    status = val;
}
